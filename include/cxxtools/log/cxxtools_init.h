/* cxxtools/log/cxxtools_init.h
 *
 * cxxtools - general purpose C++-toolbox
 * Copyright (C) 2004 Tommi Maekitalo
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef CXXTOOLS_LOG_CXXTOOLS_INIT_H
#define CXXTOOLS_LOG_CXXTOOLS_INIT_H

#include <cxxtools/log/cxxtools.h>
#include <iostream>

#define log_init_fatal()   log_init(cxxtools::Logger::LOG_LEVEL_FATAL)
#define log_init_error()   log_init(cxxtools::Logger::LOG_LEVEL_ERROR)
#define log_init_warn()    log_init(cxxtools::Logger::LOG_LEVEL_WARN)
#define log_init_info()    log_init(cxxtools::Logger::LOG_LEVEL_INFO)
#define log_init_debug()   log_init(cxxtools::Logger::LOG_LEVEL_DEBUG)
#define log_init_trace()   log_init(cxxtools::Logger::LOG_LEVEL_TRACE)
#define log_init           log_init_cxxtools

void log_init_cxxtools(cxxtools::Logger::log_level_type level);
void log_init_cxxtools(std::istream& properties);
void log_init_cxxtools(const std::string& propertyfilename);
void log_init_cxxtools();

#endif // CXXTOOLS_LOG_CXXTOOLS_INIT_H
