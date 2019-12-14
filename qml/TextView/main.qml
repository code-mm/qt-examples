import QtQuick 2.12
import QtQuick.Window 2.12

//https://blog.csdn.net/u011330815/article/details/81480023
Window {
    id:window
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Text {
        id: text
        width: 100
        height: 100
        text: qsTr("Text")
        font:{
            font.pixelSize=30
            font.weight=Font.Normal
        }

        color: "#ff0055"
        anchors.centerIn: parent
        elide: Text.ElideRight

    }
}
