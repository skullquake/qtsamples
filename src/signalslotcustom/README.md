Custom Signals and slots example

The most important macro is Q_OBJECT. Signal-Slot connections and their syntax cannot be interpreted by a regular C++ compiler. The moc is provided to translate the QT syntax like "connect", "signals", "slots", etc into regular C++ syntax. This is done by specifying the Q_OBJECT macro in the header containing class definitions that use such syntax. 


```
qmake -project&&qmake&&make
```

add to .pro

```
QT += gui
QT += widgets
```

add to .pro

```
SOURCES+=./window.cpp
HEADERS+=./window.h
```

[wiki.qt.io/Qt_for_Beginners](https://wiki.qt.io/Qt_for_Beginners)
