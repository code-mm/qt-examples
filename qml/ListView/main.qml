import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    ListView {
        id : m_listView
        anchors.fill: parent
        anchors.margins: 20
        clip: true
        model: ["A","B","C","D","E"]
        delegate: numberDelegate
        spacing: 5
        focus: true
    }

    Component {
        id: numberDelegate

        Rectangle {
            width: ListView.view.width
            height: 40
            color: ListView.isCurrentItem?"#157efb":"#53d769" //选中颜色设置
            border.color: Qt.lighter(color, 1.1)
            Text {
                anchors.centerIn: parent
                font.pixelSize: 10
                text: modelData + index
            }

            MouseArea {
                anchors.fill: parent
                onClicked: m_listView.currentIndex = index  //实现item切换
            }
        }
    }

}
