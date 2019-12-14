import QtQuick 2.3
import QtQuick.Controls 2.0
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Ionicon{

    }


    Image {
        anchors.fill: parent
        Button {
            text: "Get random image"
            onClicked: parent.source = "https://picsum.photos/320/240?_" + Math.random()
        }
        BusyIndicator {
            running: parent.status === Image.Loading
            anchors.centerIn: parent
        }
    }
}
