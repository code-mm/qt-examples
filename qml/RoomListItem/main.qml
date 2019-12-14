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
        id:listViewRoom
        width: parent.width
        height:parent.height
        spacing: 2
        cacheBuffer: 10
        focus: true
        clip: true
        boundsBehavior:ListView.SnapToItem
        model: ListModel{
            ListElement{
                avatar:"qrc:/img_room.png"
                name : "2020春节联欢"
                lastermessage:"新年好!"
            }

            ListElement{
                avatar:"qrc:/img_room.png"
                name : "2020春节联欢"
                lastermessage:"新年好!"
            }

            ListElement{
                avatar:"qrc:/img_room.png"
                name : "2020春节联欢"
                lastermessage:"新年好!"
            }
        }
        delegate:Component{
            Item{
                width: parent.width
                height: 80

                Row{
                    width: parent.width
                    height: parent.height
                    anchors.margins: 10
                    Image {
                        width: 80
                        height: 80
                        source: avatar
                        anchors.margins: 30
                        scale: 0.5

                        anchors.verticalCenter: parent.verticalCenter
                    }
                    Column{
                        width: parent.width
                        height: parent.height

                        spacing: 5

                        Label {
                            anchors.leftMargin: 50
                            anchors.topMargin: 30
                            text: name
                            font:font.pixelSize=25
                        }
                        Label {
                            anchors.leftMargin: 50
                            anchors.topMargin: 30
                            text: lastermessage
                            font:font.pixelSize=15
                        }
                    }
                }

                states: State {
                    name: "Current"
                    when: listViewRoom.isCurrentItem
                    PropertyChanges { target: content; x: 20 }
                }
                transitions: Transition {
                    NumberAnimation { properties: "x"; duration: 200 }
                }

                MouseArea{
                    anchors.fill: parent
                    acceptedButtons: Qt.LeftButton | Qt.RightButton // 激活右键（别落下这个）
                    onClicked: {
                        listViewRoom.currentIndex = index;


                        if(!listViewRoom.activeFocus){
                            listViewRoom.forceActiveFocus();
                        }

                    }
                }
            }
        }
        highlight:Component {
            Rectangle {
                width: listViewRoom.width; height: 80
                color: "#FFFF88"
                y: listViewRoom.currentItem.y;
                Behavior on y { SpringAnimation { spring: 1; damping: 0.2 } }
            }
        }
    }
}

