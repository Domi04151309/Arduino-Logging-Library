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
 
#ifndef Logging_h
#define Logging_h

#define LOG_DEBUG 3
#define LOG_ERROR 6
#define LOG_INFO 4
#define LOG_VERBOSE 2
#define LOG_WARN 5

class Log {
  public:
    Log();
    void d(String tag, String msg);
    void e(String tag, String msg);
    void i(String tag, String msg);
    void v(String tag, String msg);
    void w(String tag, String msg);
    void wtf(String tag, String msg);
    void println(uint8_t priority, String tag, String msg);
  private:
    String getTime();
    void print(String p, String t, String m);
};

#endif
