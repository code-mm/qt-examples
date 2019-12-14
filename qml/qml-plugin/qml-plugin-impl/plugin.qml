import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Button{
        text:"插件-按钮"

        onClicked: {
            console.log("插件按钮点击测试")
        }
    }

    Image {

        source: "qrc:/images/img_logo.png"
    }
    Image {
        source: "qrc:/img_qr.png"
    }
}
