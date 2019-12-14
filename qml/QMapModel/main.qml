import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    ListView{
        width: parent.width
        height: parent.height
        model: messageModel
        spacing: 4
        cacheBuffer: 10
        focus: true
        clip: true

        delegate: Component{

            Item {
                width: parent.width
                height: 100
                Text {
                    text:model.message
                }
            }
        }
    }
}
