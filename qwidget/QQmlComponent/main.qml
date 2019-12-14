import QtQuick 2.12
import QtQuick.Controls 2.0
import QtQuick.Window 2.12

Item {

    objectName:  "myItem"
    id:item

    visible: true
    width: 640
    height: 480

    Home{

    }


    function call(msg){
        console.log(msg)

        return "ok"
    }




}
