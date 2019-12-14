import QtQuick 2.12
import QtQuick.Window 2.12

import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Material 2.12

import EmojiModel 0.1

Window {
    visible: true
    width: 800
    height: 680
    title: qsTr("Emoji 选择")


    Column{
        width: parent.width
        height: parent.height

        TextArea{
            width: parent.width
            height: 100
            id:inputField
        }

        EmojiPicker {
            width: parent.width
            height: 50
            Layout.fillWidth: true
            id: emojiPicker
            visible: true
            textArea: inputField
            emojiModel: EmojiModel { id: emojiModel }
        }
    }
}
