import QtQuick 2.0
import QtQuick.Controls 2.0
import  QtQuick.Window 2.0


Item{

    Component
    {
        id: msnDelegate
        Item
        {
            id: wrapper
            width: grid.cellWidth; height: grid.cellHeight
            Column
            {
                Image{ source: "pics/light_on.png";anchors.horizontalCenter: parent.horizontalCenter; width: grid.cellWidth * 0.7; height: grid.cellHeight * 0.7}
                Text { text: ctrl_id;anchors.horizontalCenter: parent.horizontalCenter; color: wrapper.GridView.isCurrentItem ? "red" :"blue" }
                Text { text: name;anchors.horizontalCenter: parent.horizontalCenter; color: wrapper.GridView.isCurrentItem ? "red" :"blue" }
            }

            MouseArea
            {
                anchors.fill: parent
                onClicked: grid.currentIndex = index
            }
        }
    }
    GridView {
        id:grid
        //anchors.fill: parent
        width: parent.width
        height: parent.height - space1.height
        anchors {top: space1.bottom;}
        cellWidth: parent.width * 0.25
        cellHeight: parent.width * 0.25
        //model: listModel
        model: myFirstModel
        delegate: msnDelegate
        highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
        currentIndex: 2
        //focus: true
    }

}
