/*=============================================================================
  Copyright (C) 2012 Allied Vision Technologies.  All Rights Reserved.

  Redistribution of this file, in original or modified form, without
  prior written consent of Allied Vision Technologies is prohibited.

-------------------------------------------------------------------------------

  File:        UserLoggerDefines.h

  Description: Definition of macros used for different logging methods.

-------------------------------------------------------------------------------

  THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR IMPLIED
  WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF TITLE,
  NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A PARTICULAR  PURPOSE ARE
  DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, 
  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED  
  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR 
  TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

=============================================================================*/

#ifndef AVT_VMBAPI_USERLOGGERDEFINES_H
#define AVT_VMBAPI_USERLOGGERDEFINES_H

//
// To use your own logger implementation add the define USER_LOGGER to your project / compiler settings and complete this header file.
//

// Add all your required logger implementation headers here.
// HINT: #include <VimbaCPP/Include/FileLogger.h> is an example and can be safely removed.
#include <Vimba_2.0/VimbaCPP/Include/FileLogger.h>

namespace AVT {
namespace VmbAPI {

#define LOGGER_DECL                         FileLogger
#define LOGGER_DEF                          FileLogger( "VimbaCPP.log", true )
#define LOGGER_LOG( logger, loggingInfo )   if ( NULL != (logger) ) (logger)->Log( loggingInfo );


// These are all uses of LOGGER_DECL logger declarations
typedef LOGGER_DECL* Logger;

}} // namespace AVT::VmbAPI

#endif
