import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.13

import QtQuick 2.12
import QtQuick.Window 2.12

import QtQuick.Controls 2.0
import Qt.labs.platform 1.1
import QtQuick.Layouts 1.3
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")




    ListView{

        width: parent.width
        height: parent.height


        model: ListModel{

            ListElement{

                name : "测试数据1"

            }
            ListElement{

                name : "测试数据2"

            }
            ListElement{

                name : "测试数据3"

            }

        }


        delegate:Component{
            Item {
                width: parent.width
                height: 100

                Text {
                    text: name
                    font: font.pixelSize=20
                }

                MouseArea{
                    id: mouseRegion
                    anchors.fill: parent;
                    acceptedButtons: Qt.LeftButton | Qt.RightButton // 激活右键（别落下这个）
                    onClicked: {
                        if (mouse.button == Qt.RightButton) { // 右键菜单

                            contentMenu.popup()
                        }
                    }
                }
            }
        }
    }

    // 右键菜单
    Menu {
        id: contentMenu
        MenuItem {
            text: "Cut"
            shortcut: "Ctrl+X"
            onTriggered: {}
        }
    }
}
