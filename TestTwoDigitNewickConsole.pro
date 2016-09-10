include(../RibiLibraries/ConsoleApplication.pri)

include(../BinaryNewickVector/BinaryNewickVector.pri)
include(../Newick/Newick.pri)

include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppTestTimer/CppTestTimer.pri)
include(../RibiClasses/CppTrace/CppTrace.pri)
include(../RibiClasses/CppTwoDigitNewick/CppTwoDigitNewick.pri)
include(../RibiClasses/CppFuzzy_equal_to/CppFuzzy_equal_to.pri)

include(../RibiLibraries/BigInteger.pri)

SOURCES += main.cpp

# Thanks to Qt
QMAKE_CXXFLAGS += -Wno-unused-variable

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
