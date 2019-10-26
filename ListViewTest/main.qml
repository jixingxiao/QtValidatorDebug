import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 200
    title: qsTr("Hello World")
    Rectangle{
        id : listRec
        anchors.centerIn: parent
        width : 120
        color : "lightgreen"
       // opacity: 0.5
        RecordSignalList{
            id :showsignal
            anchors.fill: parent
        }
    }
    DropArea{
        id:drop

        anchors.fill: parent
//        visible: false
        onEntered: {
            console.log("***********************dd*********************");
                        drag.accept(false)
            drag.action=Qt.CopyAction
            dddddddddchen.setKK(1);
        }
        onDropped: {
            dddddddddchen.setKK(0);
           var str = drop.getDataAsString("id")

        }
        onExited: {

        }
    }


}
