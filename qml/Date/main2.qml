import QtQml 2.0

QtObject {
    property var locale: Qt.locale()
    property string dateTimeString: "Tue 2013-09-17 10:56:06"

    Component.onCompleted: {
        print(Date.fromLocaleString(locale, dateTimeString, "ddd yyyy-MM-dd hh:mm:ss"));
    }
}
