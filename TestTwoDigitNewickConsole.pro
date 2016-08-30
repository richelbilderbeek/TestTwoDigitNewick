QT       += core gui
CONFIG   += console
CONFIG   -= app_bundle
TEMPLATE = app

#Use 64 bit
#QMAKE_CXXFLAGS += -m64



include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppBinaryNewickVector/CppBinaryNewickVector.pri)
include(../RibiClasses/CppFuzzy_equal_to/CppFuzzy_equal_to.pri)
include(../RibiClasses/CppNewick/CppNewick.pri)
include(../RibiClasses/CppTestTimer/CppTestTimer.pri)
include(../RibiClasses/CppTrace/CppTrace.pri)
include(../RibiClasses/CppTwoDigitNewick/CppTwoDigitNewick.pri)

include(../RibiLibraries/BigInteger.pri)

SOURCES += main.cpp

#
#
# Type of compile
#
#

CONFIG(release, debug|release) {
  DEFINES += NDEBUG NTRACE_BILDERBIKKEL
}

QMAKE_CXXFLAGS += -std=c++11 -Wall -Wextra -Weffc++

unix {
  QMAKE_CXXFLAGS += -Werror
}
