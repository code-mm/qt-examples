import QtQuick 2.12
import QtQuick.Window 2.12


//https://doc.qt.io/qt-5/qml-qtqml-timer.html
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    //    interval : int
    //    repeat : bool
    //    running : bool
    //    triggeredOnStart : bool




    Item {
        Timer {
            interval: 500; running: true; repeat: true
            onTriggered: time.text = Date().toString()
        }

        Text { id: time }
    }
}
