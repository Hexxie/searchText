TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/main.cpp \
    src/DownloadManager.cpp \
    test/DownloadManagerTest.cpp \
    test/main.cpp \
    src/wrappers/Link.cpp \
    src/commands/StopCommand.cpp \
    src/commands/StartCommand.cpp \
    src/commands/ResumeCommand.cpp \
    src/commands/PauseCommand.cpp \
    src/SearchEngine.cpp

HEADERS += \
    src/DownloadManager.h \
    src/wrappers/Link.h \
    src/commands/StopCommand.h \
    src/commands/StartCommand.h \
    src/commands/ResumeCommand.h \
    src/commands/PauseCommand.h \
    src/commands/Command.h \
    src/SearchEngine.h

