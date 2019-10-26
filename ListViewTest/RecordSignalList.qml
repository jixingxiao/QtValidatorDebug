import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
Item {
    ListView{
        id : list
        anchors.fill: parent
        model : dddddddddchen.signal
        SequentialAnimation on contentY{
         id : changeAn
        PropertyAnimation{

            //easing : Easing.Linear
            from : list.contentY
            to :list.contentY + 30
            duration: 500
        }
        }
        delegate: Rectangle{
            width: 100
            height: 30
            color: "lightgreen"
            opacity: 0.5
            Text {
                id: signalName
                anchors.fill : parent
                text : modelData.modelName
            }
            Drag.active : dragmousearea.drag.active
            //Drag.supportedActions:Qt.CopyAction
            Drag.proposedAction:Qt.CopyAction
            Drag.onDragStarted:
            {
                console.log("---fffffffffffffffffffffddddddddddddddddddddddd");
            }
            Drag.onDragFinished: {
                console.log("--fffffffffffffffffffchenyf");
            }
            Drag.dragType : Drag.Automatic
            Drag.mimeData: {"id" : modelData.modelID}
            MouseArea{
                id : dragmousearea
                anchors.fill : parent
                propagateComposedEvents: true
                hoverEnabled: true
                drag.target: parent
                onEntered: {
//                    listRec.height = 120;
//                   changeIndex.stop();
                }
                onExited: {
                   // listRec.height = 0

                   // if(drag.source)
                    {
                       console.log("---------------------------dddddddddddddddd");
                        changeIndex.start();
                    }

                }
            }
            Timer{
                id : changeIndex
                interval:2000
                repeat: true
                onTriggered: {
                    //dragmousearea.drag.target = null
 dddddddddchen.desSig();

                }

            }

        }
        ScrollBar.vertical: ScrollBar {
            id: scrollBar
            onActiveChanged: {
                active = true;
            }
        }



    }
    Component.onCompleted: {
//        changeIndex.start();
    }
}
