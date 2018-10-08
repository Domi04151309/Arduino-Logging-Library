/*
 *Logging - Library for logging
 *
 *Copyright 2018 Dominik Reichl
 *
 *Developed by Dominik Reichl
 *
 *This library is free software; you can redistribute it and/or modify
 *it under the terms of the GNU General Public License as published by
 *the Free Software Foundation; either version 2 of the License, or
 *(at your option) any later version.
 *
 *This library is distributed in the hope that it will be useful,
 *but WITHOUT ANY WARRANTY; without even the implied warranty of
 *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *GNU General Public License for more details.
 *
 *You should have received a copy of the GNU General Public License
 *along with this library; if not, write to the Free Software
 *Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *As a special exception, you may use this file as part of a free software
 *library without restriction.  Specifically, if other files instantiate
 *templates or use macros or inline functions from this file, or you compile
 *this file and link it with other files to produce an executable, this
 *file does not by itself cause the resulting executable to be covered by
 *the GNU General Public License.  This exception does not however
 *invalidate any other reasons why the executable file might be covered by
 *the GNU General Public License.
 */

#include <Arduino.h>
#include <Logging.h>

Log::Log() {}

void Log::d(String tag, String msg) {
  print("D/", tag, msg);
}

void Log::e(String tag, String msg) {
  print("E/", tag, msg);
}

void Log::i(String tag, String msg) {
  print("I/", tag, msg);
}

void Log::v(String tag, String msg) {
  print("V/", tag, msg);
}

void Log::w(String tag, String msg) {
  print("W/", tag, msg);
}

void Log::wtf(String tag, String msg) {
  print("WTF/", tag, msg);
}

void Log::println(uint8_t priority, String tag, String msg) {
  switch(priority) {
    case LOG_DEBUG:
      d(tag, msg);
      break;
    case LOG_ERROR:
      e(tag, msg);
      break;
    case LOG_INFO:
      i(tag, msg);
      break;
    case LOG_VERBOSE:
      v(tag, msg);
      break;
    case LOG_WARN:
      w(tag, msg);
      break;
    default:
      break;
  }
}

String Log::getTime() {
  uint8_t s = millis()/1000;
  uint8_t m = 0;
  unsigned int h = 0;
  String s_str;
  String m_str;
  String h_str;
  while(s >= 60) {
    s -= 60;
    m++;
  }
  while(m >= 60) {
    m -= 60;
    h++;
  }
  if(s < 10)
    s_str = "0" + String(s);
  else
    s_str = String(s);
  if(m < 10)
    m_str = "0" + String(m);
  else
    m_str = String(m);
  if(h < 10)
    h_str = "0" + String(h);
  else
    String h_str = String(h);
  String time = h_str + ":" + m_str + ":" + s_str;
  return time;
}

void Log::print(String p, String t, String m) {
  Serial.print(getTime());
  Serial.print(" ");
  Serial.print(p);
  Serial.print(t);
  Serial.print(": ");
  Serial.println(m);
}
