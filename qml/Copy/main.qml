import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.4
import Clipboard 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello Clipboard")
    Clipboard{
        id:clipboard
    }

    TextArea{
        id:ta
        width: 200
        height: 200
        background:Rectangle{
            border.width: 1
            border.color: "black"
        }
    }
    Button{
        anchors.left:ta.right
        text:"COPY TO CLIPBOARD"
        onClicked: {
            clipboard.setText(ta.text);
        }
    }
}
