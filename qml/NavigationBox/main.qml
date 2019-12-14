import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Rectangle{
        width: parent.width
        height: parent.height


        color: "#f0f0f0"
    }


    Na{
        id:na
    }



    Button{
        text:  "显示"
        onClicked:{
            na.notify("哈哈")
        }
    }
}
