import QtQuick
import org.kde.kirigami as Kirigami

Kirigami.ApplicationItem {
    id: root
    width: 600
    height: 480
    visible: true

    pageStack.initialPage: mainPageComponent
    Component {
        id: mainPageComponent
        Kirigami.Page {
            Text {
                 anchors.centerIn: parent
                 text: "Hello QT"
                 color: "red"
                 font.pointSize: 18
            }
        }
    }
}
