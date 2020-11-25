/* Copyright 2020 klackygears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "eek.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.




#ifdef RGB_MATRIX_ENABLE

  // Logical Layout
  // Columns
  //  0  1  2  3  4
  //                   ROWS
  //  4  3  2  1  0      0
  //  5  6  7  8  9      1
  // 14 13 12 11 10      2
  //       15 16 17      3

 // Logical Layout v1.3
  // Columns
  //  0  1  2  3  4  5  6  7  8  9
  //                                 ROWS
  //  0  1  2  3  4  5  6  7  8  9     0
  // 19 18 17 16 15 14 13 12 11 10     1
  // 20 21 22 23 24 25 26 27 28 29     2
  //       35 34 33 32 31 30           3


led_config_t g_led_config = { {
    {    4,   3,   2,   1,   0,  0,   1,  2,  3,  4  },
    {    5,   6,   7,   8,   9,  9,   8,  7,  6,  5  },
    {   14,  13,  12,  11,  10,  10, 11, 12, 13, 14  },
    { NO_LED, NO_LED, 15, 16, 17, 17, 16, 15, NO_LED, NO_LED }
}, {
    {  93, 13 }, {  77,  7 }, {  62,  0 }, {  46,  0 }, {  31,  0 },
    {  85, 24 }, {  70, 17 }, {  54, 10 }, {  39, 10 }, {  23, 10 },
    {  77, 34 }, {  62, 27 }, {  46, 20 }, {  31, 20 }, {  15, 20 },
    {  39, 34 }, {  54, 37 }, {  70, 44 },
    { 131, 13 }, { 147,  7 }, { 162,  0 }, { 178,  0 }, { 193,  0 },
    { 201, 10 }, { 185, 10 }, { 170, 10 }, { 154, 17 }, { 139, 24 },
    { 147, 34 }, { 162, 27 }, { 178, 20 }, { 193, 20 }, { 209, 20 },
    { 185, 34 }, { 170, 37 }, { 154, 44 },
}, {
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     1, 1, 1, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 4, 4,
     4, 4, 4, 1, 1,
     1,
} };
#endif

/*

void matrix_init_kb(void) {
  // put your keyboard start-up code here
  // runs once when the firmware starts up

  matrix_init_user();
}

void matrix_scan_kb(void) {
  // put your looping keyboard code here
  // runs every cycle (a lot)

  matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
  // put your per-action keyboard code here
  // runs for every action, just before processing by the firmware

  return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
  // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

  led_set_user(usb_led);
}

*/
