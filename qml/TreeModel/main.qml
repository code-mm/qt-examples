import QtQuick 2.12
import QtQuick.Window 2.12

import QtQuick.Controls 2.5
import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Controls 1.4

import tree 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    //    TreeModel {
    //        id: treemodel
    //        roles: ["phrase","year"]
    //        TreeElement{
    //            property string phrase: "Hey"
    //            property string year: "2017"
    //            TreeElement{
    //                property string phrase: "What's"
    //                property string year: "2018"
    //                TreeElement{
    //                    property string phrase: "Up?"
    //                    property string year: "2019"
    //                    TreeElement{
    //                        property string phrase: "What's"
    //                        property string year: "2018"
    //                        TreeElement{
    //                            property string phrase: "Up?"
    //                            property string year: "2019"
    //                        }
    //                    }

    //                }


    //                TreeElement{
    //                    property string phrase: "What's"
    //                    property string year: "2018"
    //                    TreeElement{
    //                        property string phrase: "Up?"
    //                        property string year: "2019"
    //                    }
    //                }

    //            }
    //        }
    //        TreeElement{
    //            property string phrase: "Hey"
    //            property string year: "2018"
    //        }
    //        TreeElement{
    //            property string phrase: "Hey"
    //            property string year: "2019"
    //        }
    //        TreeElement{
    //            property string phrase: "Hey"
    //            property string year: "2020"
    //        }
    //    }
    //    TreeView {
    //        anchors.fill: parent
    //        anchors.bottomMargin: 75
    //        model: treemodel
    //        TableViewColumn {
    //            title: "Name"
    //            role: "phrase"
    //            width: 200
    //        }
    //        TableViewColumn {
    //            title: "Year"
    //            role: "year"
    //            width: 200
    //        }
    //    }




    TreeModel {
        id: treemodel
        roles: ["phrase"]
        TreeElement{
            property string phrase: "房间"

            TreeElement{
                property string phrase: "房间1"
            }
            TreeElement{
                property string phrase: "房间2"
            }
            TreeElement{
                property string phrase: "房间3"
            }
            TreeElement{
                property string phrase: "房间4"
            }
            TreeElement{
                property string phrase: "房间5"
            }
            TreeElement{
                property string phrase: "房间6"
            }

        }
        TreeElement{
            property string phrase: "好友"
            TreeElement{
                property string phrase: "好友1"
            }
            TreeElement{
                property string phrase: "好友2"
            }
            TreeElement{
                property string phrase: "好友3"
            }
            TreeElement{
                property string phrase: "好友4"
            }
            TreeElement{
                property string phrase: "好友5"
            }
            TreeElement{
                property string phrase: "好友6"
            }
            TreeElement{
                property string phrase: "好友7"
            }
        }
    }
    TreeView {
        anchors.fill: parent
        anchors.bottomMargin: 75
        model: treemodel
        TableViewColumn {

            title: "Name"
            role: "phrase"
            width: 200


        }
    }




}
