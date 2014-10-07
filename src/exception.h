/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _AUTOPIPER_EXCEPTION_H_
#define _AUTOPIPER_EXCEPTION_H_

#include <exception>
#include <string>

namespace autopiper {
class Exception : public std::exception {
    public:
        Exception(const std::string& message) : message_(message) {}
        Exception(const char* message) : message_(message) {}

        virtual const char* what() const noexcept { return message_.c_str(); }

    private:
        std::string message_;
};
}  // namespace autopiper

#endif
