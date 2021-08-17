/*
Copyright 2020 MisonoWorks

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "colavan.h"

led_config_t g_led_config = { {
    //Key Matrix to LED index
    { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
    { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 },
    { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44 },
    { 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 },
}, {
    //LED Index to Physical Position
    {0,0}, {16,0}, {32,0}, {48,0}, {64,0}, {80,0}, {96,0}, {112,0}, {128,0}, {144,0}, {160,0}, {176,0}, {192,0}, {208,0}, {224,0}, 
	{0,21}, {16,21}, {32,21}, {48,21}, {64,21}, {80,21}, {96,21}, {112,21}, {128,21}, {144,21}, {160,21}, {176,21}, {192,21}, {208,21}, {224,21}, 
	{0,43}, {16,43}, {32,43}, {48,43}, {64,43}, {80,43}, {96,43}, {112,43}, {128,43}, {144,43}, {160,43}, {176,43}, {192,43}, {208,43}, {224,43}, 
	{0,64}, {16,64}, {32,64}, {64,64}, {80,64}, {96,64}, {112,64}, {144,64}, {160,64}, {176,64}, {192,64}, {208,64}, {224,64}
}, {
    //LED Index to Flag
    1,4,4,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,4,4,4,1,
    1,4,4,4,4,4,4,4,4,4,4,4,1
} };
