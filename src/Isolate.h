/*
 *      _____  __  _____  __     ____
 *     / ___/ / / /____/ / /    /    \   ofxFieldKitDart
 *    / ___/ /_/ /____/ / /__  /  /  /   (c) 2013, FIELD. All rights reserved.
 *   /_/        /____/ /____/ /_____/    http://www.field.io
 *
 *   Created by Marcus Wendt on 27/12/2013.
 */


#pragma once

#include "dart_api.h"

namespace fieldkit { namespace dart {
    
    class Library;
    
    class Isolate {
    public:
        Isolate(Dart_Isolate isolate, Dart_Handle library)
        : isolate_(isolate),
          library_(library) {}
        
        ~Isolate() {}

        //! calls a function by name with the given arguments
        void Invoke(const char* function, int argc = 0, Dart_Handle* args = NULL);
        
        Dart_Isolate getIsolate() { return isolate_; }
        Dart_Handle getLibrary() { return library_; }
        
    private:
        Dart_Isolate isolate_;
        Dart_Handle library_;
    };
    
} } // namespace fieldkit::dart