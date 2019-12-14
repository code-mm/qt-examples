import QtQuick 2.0
import QtQuick.Controls 2.0

Item {
    property alias text: textField.text
    signal changeText(string text)

    TextField{
        id:textField
        onTextChanged: changeText(text)
    }
}
