/*

The C code to be compiled with Emscripten and accessible from hand-written
JavaScript code. The sole function implemented here calls the callback function
passed to it as a parameter.
To compile this code with Emscripten run following command:
 
emcc callback.c -o callback.js -s EXPORTED_FUNCTIONS="['_call']" 

This code is free software: you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option)
any later version.

This code is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with code. If not, see <http://www.gnu.org/licenses/>.

*/

void call(void (*back)(char*)){
	back("Hello!");
}