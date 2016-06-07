# QML Translator

Class for translations strings in C++/Qml code.

## Usage

```cpp

#include "qmltranslator.h"

...

// Qml translation manager
QmlTranslator qmlTranslator;
qmlTranslator.initFromSettings(SETTINGS);
engine.rootContext()->setContextProperty("qmlTranslator", &qmlTranslator);
```

SETTINGS - object of class QSettings

settings.ini fail example:

```ini
[Main]
language=ru_RU
```

In QML code:

```qml
qmlTranslator.setTranslation("ru_RU");
qmlTranslator.setTranslation("en_US");
qmlTranslator.setTranslation("de_DE");
qmlTranslator.setTranslation("kz_KZ");
```

## language resources

Add them to your resources with the prefix ``/translations``.

## Install

Just include it as submodule to your project or use ``qpm`` manager:

```bash
$ qpm install com.github.uralbash.qmltranslator
```
