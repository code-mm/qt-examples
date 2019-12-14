import QtQuick 2.12
import QtQuick.Window 2.12
import QtQml 2.0


//https://doc.qt.io/qt-5/qml-qtqml-date.html
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    QtObject {
        property var locale: Qt.locale()
        property date currentDate: new Date()
        property string dateString

        Component.onCompleted: {
            dateString = currentDate.toLocaleDateString();
            print(Date.fromLocaleDateString(dateString));
        }
    }
    Text {
        text: "The date is: " + new Date().toLocaleTimeString(Qt.locale("de_DE"))
    }

}
