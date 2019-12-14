import QtQml 2.2

QtObject {
    property var locale: Qt.locale()
    property date currentTime: new Date()
    property string timeString

    Component.onCompleted: {
        timeString = currentTime.toLocaleTimeString(locale, Locale.ShortFormat);
        print(Date.fromLocaleTimeString(locale, timeString, Locale.ShortFormat));
    }
}
