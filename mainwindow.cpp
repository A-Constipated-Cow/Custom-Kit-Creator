#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug> // For debugging output
#include <iostream> // For input/output operations (e.g., std::cout, std::cerr)
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->sub0->setCurrentIndex(9);
    ui->spe0->setCurrentIndex(5);
    ui->dep0->setCurrentIndex(0);
    ui->sub1->setCurrentIndex(6);
    ui->spe1->setCurrentIndex(6);
    ui->dep1->setCurrentIndex(0);
    ui->sub2->setCurrentIndex(0);
    ui->spe2->setCurrentIndex(4);
    ui->dep2->setCurrentIndex(0);
    ui->sub3->setCurrentIndex(0);
    ui->spe3->setCurrentIndex(2);
    ui->dep3->setCurrentIndex(1);
    ui->sub4->setCurrentIndex(5);
    ui->spe4->setCurrentIndex(1);
    ui->dep4->setCurrentIndex(0);
    ui->sub5->setCurrentIndex(1);
    ui->spe5->setCurrentIndex(0);
    ui->dep5->setCurrentIndex(0);
    ui->sub6->setCurrentIndex(2);
    ui->spe6->setCurrentIndex(4);
    ui->dep6->setCurrentIndex(0);
    ui->sub7->setCurrentIndex(3);
    ui->spe7->setCurrentIndex(4);
    ui->dep7->setCurrentIndex(0);
    ui->sub8->setCurrentIndex(4);
    ui->spe8->setCurrentIndex(3);
    ui->dep8->setCurrentIndex(0);
    ui->sub9->setCurrentIndex(2);
    ui->spe9->setCurrentIndex(6);
    ui->dep9->setCurrentIndex(1);
    ui->sub10->setCurrentIndex(2);
    ui->spe10->setCurrentIndex(0);
    ui->dep10->setCurrentIndex(0);
    ui->sub11->setCurrentIndex(1);
    ui->spe11->setCurrentIndex(4);
    ui->dep11->setCurrentIndex(2);
    ui->sub12->setCurrentIndex(0);
    ui->spe12->setCurrentIndex(3);
    ui->dep12->setCurrentIndex(1);
    ui->sub13->setCurrentIndex(2);
    ui->spe13->setCurrentIndex(0);
    ui->dep13->setCurrentIndex(0);
    ui->sub14->setCurrentIndex(1);
    ui->spe14->setCurrentIndex(4);
    ui->dep14->setCurrentIndex(2);
    ui->sub15->setCurrentIndex(7);
    ui->spe15->setCurrentIndex(5);
    ui->dep15->setCurrentIndex(1);
    ui->sub16->setCurrentIndex(3);
    ui->spe16->setCurrentIndex(3);
    ui->dep16->setCurrentIndex(0);
    ui->sub17->setCurrentIndex(0);
    ui->spe17->setCurrentIndex(1);
    ui->dep17->setCurrentIndex(0);
    ui->sub18->setCurrentIndex(8);
    ui->spe18->setCurrentIndex(3);
    ui->dep18->setCurrentIndex(0);
    ui->sub19->setCurrentIndex(6);
    ui->spe19->setCurrentIndex(6);
    ui->dep19->setCurrentIndex(1);
    ui->sub20->setCurrentIndex(0);
    ui->spe20->setCurrentIndex(3);
    ui->dep20->setCurrentIndex(0);
    ui->sub21->setCurrentIndex(6);
    ui->spe21->setCurrentIndex(4);
    ui->dep21->setCurrentIndex(0);
    ui->sub22->setCurrentIndex(1);
    ui->spe22->setCurrentIndex(0);
    ui->dep22->setCurrentIndex(1);
    ui->sub23->setCurrentIndex(8);
    ui->spe23->setCurrentIndex(1);
    ui->dep23->setCurrentIndex(0);
    ui->sub24->setCurrentIndex(7);
    ui->spe24->setCurrentIndex(6);
    ui->dep24->setCurrentIndex(2);
    ui->sub25->setCurrentIndex(0);
    ui->spe25->setCurrentIndex(1);
    ui->dep25->setCurrentIndex(0);
    ui->sub26->setCurrentIndex(9);
    ui->spe26->setCurrentIndex(5);
    ui->dep26->setCurrentIndex(0);
    ui->sub27->setCurrentIndex(7);
    ui->spe27->setCurrentIndex(3);
    ui->dep27->setCurrentIndex(0);
    ui->sub28->setCurrentIndex(2);
    ui->spe28->setCurrentIndex(6);
    ui->dep28->setCurrentIndex(0);
    ui->sub29->setCurrentIndex(4);
    ui->spe29->setCurrentIndex(4);
    ui->dep29->setCurrentIndex(0);
    ui->sub30->setCurrentIndex(0);
    ui->spe30->setCurrentIndex(0);
    ui->dep30->setCurrentIndex(2);
    ui->sub31->setCurrentIndex(5);
    ui->spe31->setCurrentIndex(5);
    ui->dep31->setCurrentIndex(0);
    ui->sub32->setCurrentIndex(6);
    ui->spe32->setCurrentIndex(2);
    ui->dep32->setCurrentIndex(1);
    ui->sub33->setCurrentIndex(7);
    ui->spe33->setCurrentIndex(3);
    ui->dep33->setCurrentIndex(0);
    ui->sub34->setCurrentIndex(0);
    ui->spe34->setCurrentIndex(6);
    ui->dep34->setCurrentIndex(0);
    ui->sub35->setCurrentIndex(2);
    ui->spe35->setCurrentIndex(5);
    ui->dep35->setCurrentIndex(0);
    ui->sub36->setCurrentIndex(4);
    ui->spe36->setCurrentIndex(2);
    ui->dep36->setCurrentIndex(0);
    ui->sub37->setCurrentIndex(1);
    ui->spe37->setCurrentIndex(0);
    ui->dep37->setCurrentIndex(0);
    ui->sub38->setCurrentIndex(3);
    ui->spe38->setCurrentIndex(4);
    ui->dep38->setCurrentIndex(0);
    ui->sub39->setCurrentIndex(5);
    ui->spe39->setCurrentIndex(5);
    ui->dep39->setCurrentIndex(0);
    ui->sub40->setCurrentIndex(5);
    ui->spe40->setCurrentIndex(5);
    ui->dep40->setCurrentIndex(0);
    ui->sub41->setCurrentIndex(2);
    ui->spe41->setCurrentIndex(6);
    ui->dep41->setCurrentIndex(1);
    ui->sub42->setCurrentIndex(1);
    ui->spe42->setCurrentIndex(1);
    ui->dep42->setCurrentIndex(0);
    ui->sub43->setCurrentIndex(6);
    ui->spe43->setCurrentIndex(4);
    ui->dep43->setCurrentIndex(0);
    ui->sub44->setCurrentIndex(7);
    ui->spe44->setCurrentIndex(2);
    ui->dep44->setCurrentIndex(0);
    ui->sub45->setCurrentIndex(2);
    ui->spe45->setCurrentIndex(4);
    ui->dep45->setCurrentIndex(1);
    ui->sub46->setCurrentIndex(3);
    ui->spe46->setCurrentIndex(0);
    ui->dep46->setCurrentIndex(0);
    ui->sub47->setCurrentIndex(1);
    ui->spe47->setCurrentIndex(5);
    ui->dep47->setCurrentIndex(0);
    ui->sub48->setCurrentIndex(9);
    ui->spe48->setCurrentIndex(6);
    ui->dep48->setCurrentIndex(1);
    ui->sub49->setCurrentIndex(7);
    ui->spe49->setCurrentIndex(4);
    ui->dep49->setCurrentIndex(0);
    ui->sub50->setCurrentIndex(1);
    ui->spe50->setCurrentIndex(5);
    ui->dep50->setCurrentIndex(0);
    ui->sub51->setCurrentIndex(8);
    ui->spe51->setCurrentIndex(1);
    ui->dep51->setCurrentIndex(2);
    ui->sub52->setCurrentIndex(0);
    ui->spe52->setCurrentIndex(3);
    ui->dep52->setCurrentIndex(2);
    ui->sub53->setCurrentIndex(3);
    ui->spe53->setCurrentIndex(5);
    ui->dep53->setCurrentIndex(1);
    ui->sub54->setCurrentIndex(8);
    ui->spe54->setCurrentIndex(3);
    ui->dep54->setCurrentIndex(0);
    ui->sub55->setCurrentIndex(4);
    ui->spe55->setCurrentIndex(2);
    ui->dep55->setCurrentIndex(0);
    ui->sub56->setCurrentIndex(0);
    ui->spe56->setCurrentIndex(6);
    ui->dep56->setCurrentIndex(0);
    ui->sub57->setCurrentIndex(9);
    ui->spe57->setCurrentIndex(6);
    ui->dep57->setCurrentIndex(0);
    ui->sub58->setCurrentIndex(0);
    ui->spe58->setCurrentIndex(4);
    ui->dep58->setCurrentIndex(0);
    ui->sub59->setCurrentIndex(2);
    ui->spe59->setCurrentIndex(3);
    ui->dep59->setCurrentIndex(0);
    ui->sub60->setCurrentIndex(7);
    ui->spe60->setCurrentIndex(6);
    ui->dep60->setCurrentIndex(0);
    ui->sub61->setCurrentIndex(0);
    ui->spe61->setCurrentIndex(4);
    ui->dep61->setCurrentIndex(0);
    ui->sub62->setCurrentIndex(5);
    ui->spe62->setCurrentIndex(2);
    ui->dep62->setCurrentIndex(1);
    ui->sub63->setCurrentIndex(3);
    ui->spe63->setCurrentIndex(1);
    ui->dep63->setCurrentIndex(0);
    ui->sub64->setCurrentIndex(0);
    ui->spe64->setCurrentIndex(0);
    ui->dep64->setCurrentIndex(0);
    ui->sub65->setCurrentIndex(6);
    ui->spe65->setCurrentIndex(4);
    ui->dep65->setCurrentIndex(0);
    ui->sub66->setCurrentIndex(6);
    ui->spe66->setCurrentIndex(2);
    ui->dep66->setCurrentIndex(0);
    ui->sub67->setCurrentIndex(4);
    ui->spe67->setCurrentIndex(4);
    ui->dep67->setCurrentIndex(0);
    ui->sub68->setCurrentIndex(1);
    ui->spe68->setCurrentIndex(6);
    ui->dep68->setCurrentIndex(1);
    ui->sub69->setCurrentIndex(0);
    ui->spe69->setCurrentIndex(0);
    ui->dep69->setCurrentIndex(2);
    ui->sub70->setCurrentIndex(8);
    ui->spe70->setCurrentIndex(5);
    ui->dep70->setCurrentIndex(1);
    ui->sub71->setCurrentIndex(7);
    ui->spe71->setCurrentIndex(1);
    ui->dep71->setCurrentIndex(1);
    ui->sub72->setCurrentIndex(0);
    ui->spe72->setCurrentIndex(0);
    ui->dep72->setCurrentIndex(2);
    ui->sub73->setCurrentIndex(0);
    ui->spe73->setCurrentIndex(0);
    ui->dep73->setCurrentIndex(2);
    ui->sub74->setCurrentIndex(8);
    ui->spe74->setCurrentIndex(5);
    ui->dep74->setCurrentIndex(1);
    ui->sub75->setCurrentIndex(7);
    ui->spe75->setCurrentIndex(1);
    ui->dep75->setCurrentIndex(1);
    ui->sub76->setCurrentIndex(2);
    ui->spe76->setCurrentIndex(1);
    ui->dep76->setCurrentIndex(1);
    ui->sub77->setCurrentIndex(9);
    ui->spe77->setCurrentIndex(6);
    ui->dep77->setCurrentIndex(1);
    ui->sub78->setCurrentIndex(2);
    ui->spe78->setCurrentIndex(1);
    ui->dep78->setCurrentIndex(1);
    ui->sub79->setCurrentIndex(9);
    ui->spe79->setCurrentIndex(6);
    ui->dep79->setCurrentIndex(1);
    ui->sub80->setCurrentIndex(7);
    ui->spe80->setCurrentIndex(5);
    ui->dep80->setCurrentIndex(0);
    ui->sub81->setCurrentIndex(5);
    ui->spe81->setCurrentIndex(1);
    ui->dep81->setCurrentIndex(0);
    ui->sub82->setCurrentIndex(2);
    ui->spe82->setCurrentIndex(3);
    ui->dep82->setCurrentIndex(2);
    ui->sub83->setCurrentIndex(1);
    ui->spe83->setCurrentIndex(4);
    ui->dep83->setCurrentIndex(0);
    ui->sub84->setCurrentIndex(5);
    ui->spe84->setCurrentIndex(2);
    ui->dep84->setCurrentIndex(2);
    ui->sub85->setCurrentIndex(2);
    ui->spe85->setCurrentIndex(0);
    ui->dep85->setCurrentIndex(0);
    ui->sub86->setCurrentIndex(7);
    ui->spe86->setCurrentIndex(3);
    ui->dep86->setCurrentIndex(0);
    ui->sub87->setCurrentIndex(6);
    ui->spe87->setCurrentIndex(6);
    ui->dep87->setCurrentIndex(1);
    ui->sub88->setCurrentIndex(8);
    ui->spe88->setCurrentIndex(5);
    ui->dep88->setCurrentIndex(0);
    ui->sub89->setCurrentIndex(0);
    ui->spe89->setCurrentIndex(1);
    ui->dep89->setCurrentIndex(0);
    ui->sub90->setCurrentIndex(8);
    ui->spe90->setCurrentIndex(2);
    ui->dep90->setCurrentIndex(0);

    if (ui->spe0->currentIndex()==0){
        QPixmap picSpe0(":/new/images/timg/"+ui->sub0->currentText()+" Rush.png");
        ui->spe0pic->setPixmap(picSpe0);
    }
    QPixmap picSub0(":/new/images/timg/"+ui->sub0->currentText()+".png");
    ui->sub0pic->setPixmap(picSub0);
    if (ui->spe1->currentIndex()==0){
        QPixmap picSpe1(":/new/images/timg/"+ui->sub1->currentText()+" Rush.png");
        ui->spe1pic->setPixmap(picSpe1);
    }
    QPixmap picSub1(":/new/images/timg/"+ui->sub1->currentText()+".png");
    ui->sub1pic->setPixmap(picSub1);
    if (ui->spe2->currentIndex()==0){
        QPixmap picSpe2(":/new/images/timg/"+ui->sub2->currentText()+" Rush.png");
        ui->spe2pic->setPixmap(picSpe2);
    }
    QPixmap picSub2(":/new/images/timg/"+ui->sub2->currentText()+".png");
    ui->sub2pic->setPixmap(picSub2);
    if (ui->spe3->currentIndex()==0){
        QPixmap picSpe3(":/new/images/timg/"+ui->sub3->currentText()+" Rush.png");
        ui->spe3pic->setPixmap(picSpe3);
    }
    QPixmap picSub3(":/new/images/timg/"+ui->sub3->currentText()+".png");
    ui->sub3pic->setPixmap(picSub3);
    if (ui->spe4->currentIndex()==0){
        QPixmap picSpe4(":/new/images/timg/"+ui->sub4->currentText()+" Rush.png");
        ui->spe4pic->setPixmap(picSpe4);
    }
    QPixmap picSub4(":/new/images/timg/"+ui->sub4->currentText()+".png");
    ui->sub4pic->setPixmap(picSub4);
    if (ui->spe5->currentIndex()==0){
        QPixmap picSpe5(":/new/images/timg/"+ui->sub5->currentText()+" Rush.png");
        ui->spe5pic->setPixmap(picSpe5);
    }
    QPixmap picSub5(":/new/images/timg/"+ui->sub5->currentText()+".png");
    ui->sub5pic->setPixmap(picSub5);
    if (ui->spe6->currentIndex()==0){
        QPixmap picSpe6(":/new/images/timg/"+ui->sub6->currentText()+" Rush.png");
        ui->spe6pic->setPixmap(picSpe6);
    }
    QPixmap picSub6(":/new/images/timg/"+ui->sub6->currentText()+".png");
    ui->sub6pic->setPixmap(picSub6);
    if (ui->spe7->currentIndex()==0){
        QPixmap picSpe7(":/new/images/timg/"+ui->sub7->currentText()+" Rush.png");
        ui->spe7pic->setPixmap(picSpe7);
    }
    QPixmap picSub7(":/new/images/timg/"+ui->sub7->currentText()+".png");
    ui->sub7pic->setPixmap(picSub7);
    if (ui->spe8->currentIndex()==0){
        QPixmap picSpe8(":/new/images/timg/"+ui->sub8->currentText()+" Rush.png");
        ui->spe8pic->setPixmap(picSpe8);
    }
    QPixmap picSub8(":/new/images/timg/"+ui->sub8->currentText()+".png");
    ui->sub8pic->setPixmap(picSub8);
    if (ui->spe9->currentIndex()==0){
        QPixmap picSpe9(":/new/images/timg/"+ui->sub9->currentText()+" Rush.png");
        ui->spe9pic->setPixmap(picSpe9);
    }
    QPixmap picSub9(":/new/images/timg/"+ui->sub9->currentText()+".png");
    ui->sub9pic->setPixmap(picSub9);
    if (ui->spe10->currentIndex()==0){
        QPixmap picSpe10(":/new/images/timg/"+ui->sub10->currentText()+" Rush.png");
        ui->spe10pic->setPixmap(picSpe10);
    }
    QPixmap picSub10(":/new/images/timg/"+ui->sub10->currentText()+".png");
    ui->sub10pic->setPixmap(picSub10);
    if (ui->spe11->currentIndex()==0){
        QPixmap picSpe11(":/new/images/timg/"+ui->sub11->currentText()+" Rush.png");
        ui->spe11pic->setPixmap(picSpe11);
    }
    QPixmap picSub11(":/new/images/timg/"+ui->sub11->currentText()+".png");
    ui->sub11pic->setPixmap(picSub11);
    if (ui->spe12->currentIndex()==0){
        QPixmap picSpe12(":/new/images/timg/"+ui->sub12->currentText()+" Rush.png");
        ui->spe12pic->setPixmap(picSpe12);
    }
    QPixmap picSub12(":/new/images/timg/"+ui->sub12->currentText()+".png");
    ui->sub12pic->setPixmap(picSub12);
    if (ui->spe13->currentIndex()==0){
        QPixmap picSpe13(":/new/images/timg/"+ui->sub13->currentText()+" Rush.png");
        ui->spe13pic->setPixmap(picSpe13);
    }
    QPixmap picSub13(":/new/images/timg/"+ui->sub13->currentText()+".png");
    ui->sub13pic->setPixmap(picSub13);
    if (ui->spe14->currentIndex()==0){
        QPixmap picSpe14(":/new/images/timg/"+ui->sub14->currentText()+" Rush.png");
        ui->spe14pic->setPixmap(picSpe14);
    }
    QPixmap picSub14(":/new/images/timg/"+ui->sub14->currentText()+".png");
    ui->sub14pic->setPixmap(picSub14);
    if (ui->spe15->currentIndex()==0){
        QPixmap picSpe15(":/new/images/timg/"+ui->sub15->currentText()+" Rush.png");
        ui->spe15pic->setPixmap(picSpe15);
    }
    QPixmap picSub15(":/new/images/timg/"+ui->sub15->currentText()+".png");
    ui->sub15pic->setPixmap(picSub15);
    if (ui->spe16->currentIndex()==0){
        QPixmap picSpe16(":/new/images/timg/"+ui->sub16->currentText()+" Rush.png");
        ui->spe16pic->setPixmap(picSpe16);
    }
    QPixmap picSub16(":/new/images/timg/"+ui->sub16->currentText()+".png");
    ui->sub16pic->setPixmap(picSub16);
    if (ui->spe17->currentIndex()==0){
        QPixmap picSpe17(":/new/images/timg/"+ui->sub17->currentText()+" Rush.png");
        ui->spe17pic->setPixmap(picSpe17);
    }
    QPixmap picSub17(":/new/images/timg/"+ui->sub17->currentText()+".png");
    ui->sub17pic->setPixmap(picSub17);
    if (ui->spe18->currentIndex()==0){
        QPixmap picSpe18(":/new/images/timg/"+ui->sub18->currentText()+" Rush.png");
        ui->spe18pic->setPixmap(picSpe18);
    }
    QPixmap picSub18(":/new/images/timg/"+ui->sub18->currentText()+".png");
    ui->sub18pic->setPixmap(picSub18);
    if (ui->spe19->currentIndex()==0){
        QPixmap picSpe19(":/new/images/timg/"+ui->sub19->currentText()+" Rush.png");
        ui->spe19pic->setPixmap(picSpe19);
    }
    QPixmap picSub19(":/new/images/timg/"+ui->sub19->currentText()+".png");
    ui->sub19pic->setPixmap(picSub19);
    if (ui->spe20->currentIndex()==0){
        QPixmap picSpe20(":/new/images/timg/"+ui->sub20->currentText()+" Rush.png");
        ui->spe20pic->setPixmap(picSpe20);
    }
    QPixmap picSub20(":/new/images/timg/"+ui->sub20->currentText()+".png");
    ui->sub20pic->setPixmap(picSub20);
    if (ui->spe21->currentIndex()==0){
        QPixmap picSpe21(":/new/images/timg/"+ui->sub21->currentText()+" Rush.png");
        ui->spe21pic->setPixmap(picSpe21);
    }
    QPixmap picSub21(":/new/images/timg/"+ui->sub21->currentText()+".png");
    ui->sub21pic->setPixmap(picSub21);
    if (ui->spe22->currentIndex()==0){
        QPixmap picSpe22(":/new/images/timg/"+ui->sub22->currentText()+" Rush.png");
        ui->spe22pic->setPixmap(picSpe22);
    }
    QPixmap picSub22(":/new/images/timg/"+ui->sub22->currentText()+".png");
    ui->sub22pic->setPixmap(picSub22);
    if (ui->spe23->currentIndex()==0){
        QPixmap picSpe23(":/new/images/timg/"+ui->sub23->currentText()+" Rush.png");
        ui->spe23pic->setPixmap(picSpe23);
    }
    QPixmap picSub23(":/new/images/timg/"+ui->sub23->currentText()+".png");
    ui->sub23pic->setPixmap(picSub23);
    if (ui->spe24->currentIndex()==0){
        QPixmap picSpe24(":/new/images/timg/"+ui->sub24->currentText()+" Rush.png");
        ui->spe24pic->setPixmap(picSpe24);
    }
    QPixmap picSub24(":/new/images/timg/"+ui->sub24->currentText()+".png");
    ui->sub24pic->setPixmap(picSub24);
    if (ui->spe25->currentIndex()==0){
        QPixmap picSpe25(":/new/images/timg/"+ui->sub25->currentText()+" Rush.png");
        ui->spe25pic->setPixmap(picSpe25);
    }
    QPixmap picSub25(":/new/images/timg/"+ui->sub25->currentText()+".png");
    ui->sub25pic->setPixmap(picSub25);
    if (ui->spe26->currentIndex()==0){
        QPixmap picSpe26(":/new/images/timg/"+ui->sub26->currentText()+" Rush.png");
        ui->spe26pic->setPixmap(picSpe26);
    }
    QPixmap picSub26(":/new/images/timg/"+ui->sub26->currentText()+".png");
    ui->sub26pic->setPixmap(picSub26);
    if (ui->spe27->currentIndex()==0){
        QPixmap picSpe27(":/new/images/timg/"+ui->sub27->currentText()+" Rush.png");
        ui->spe27pic->setPixmap(picSpe27);
    }
    QPixmap picSub27(":/new/images/timg/"+ui->sub27->currentText()+".png");
    ui->sub27pic->setPixmap(picSub27);
    if (ui->spe28->currentIndex()==0){
        QPixmap picSpe28(":/new/images/timg/"+ui->sub28->currentText()+" Rush.png");
        ui->spe28pic->setPixmap(picSpe28);
    }
    QPixmap picSub28(":/new/images/timg/"+ui->sub28->currentText()+".png");
    ui->sub28pic->setPixmap(picSub28);
    if (ui->spe29->currentIndex()==0){
        QPixmap picSpe29(":/new/images/timg/"+ui->sub29->currentText()+" Rush.png");
        ui->spe29pic->setPixmap(picSpe29);
    }
    QPixmap picSub29(":/new/images/timg/"+ui->sub29->currentText()+".png");
    ui->sub29pic->setPixmap(picSub29);
    if (ui->spe30->currentIndex()==0){
        QPixmap picSpe30(":/new/images/timg/"+ui->sub30->currentText()+" Rush.png");
        ui->spe30pic->setPixmap(picSpe30);
    }
    QPixmap picSub30(":/new/images/timg/"+ui->sub30->currentText()+".png");
    ui->sub30pic->setPixmap(picSub30);
    if (ui->spe31->currentIndex()==0){
        QPixmap picSpe31(":/new/images/timg/"+ui->sub31->currentText()+" Rush.png");
        ui->spe31pic->setPixmap(picSpe31);
    }
    QPixmap picSub31(":/new/images/timg/"+ui->sub31->currentText()+".png");
    ui->sub31pic->setPixmap(picSub31);
    if (ui->spe32->currentIndex()==0){
        QPixmap picSpe32(":/new/images/timg/"+ui->sub32->currentText()+" Rush.png");
        ui->spe32pic->setPixmap(picSpe32);
    }
    QPixmap picSub32(":/new/images/timg/"+ui->sub32->currentText()+".png");
    ui->sub32pic->setPixmap(picSub32);
    if (ui->spe33->currentIndex()==0){
        QPixmap picSpe33(":/new/images/timg/"+ui->sub33->currentText()+" Rush.png");
        ui->spe33pic->setPixmap(picSpe33);
    }
    QPixmap picSub33(":/new/images/timg/"+ui->sub33->currentText()+".png");
    ui->sub33pic->setPixmap(picSub33);
    if (ui->spe34->currentIndex()==0){
        QPixmap picSpe34(":/new/images/timg/"+ui->sub34->currentText()+" Rush.png");
        ui->spe34pic->setPixmap(picSpe34);
    }
    QPixmap picSub34(":/new/images/timg/"+ui->sub34->currentText()+".png");
    ui->sub34pic->setPixmap(picSub34);
    if (ui->spe35->currentIndex()==0){
        QPixmap picSpe35(":/new/images/timg/"+ui->sub35->currentText()+" Rush.png");
        ui->spe35pic->setPixmap(picSpe35);
    }
    QPixmap picSub35(":/new/images/timg/"+ui->sub35->currentText()+".png");
    ui->sub35pic->setPixmap(picSub35);
    if (ui->spe36->currentIndex()==0){
        QPixmap picSpe36(":/new/images/timg/"+ui->sub36->currentText()+" Rush.png");
        ui->spe36pic->setPixmap(picSpe36);
    }
    QPixmap picSub36(":/new/images/timg/"+ui->sub36->currentText()+".png");
    ui->sub36pic->setPixmap(picSub36);
    if (ui->spe37->currentIndex()==0){
        QPixmap picSpe37(":/new/images/timg/"+ui->sub37->currentText()+" Rush.png");
        ui->spe37pic->setPixmap(picSpe37);
    }
    QPixmap picSub37(":/new/images/timg/"+ui->sub37->currentText()+".png");
    ui->sub37pic->setPixmap(picSub37);
    if (ui->spe38->currentIndex()==0){
        QPixmap picSpe38(":/new/images/timg/"+ui->sub38->currentText()+" Rush.png");
        ui->spe38pic->setPixmap(picSpe38);
    }
    QPixmap picSub38(":/new/images/timg/"+ui->sub38->currentText()+".png");
    ui->sub38pic->setPixmap(picSub38);
    if (ui->spe39->currentIndex()==0){
        QPixmap picSpe39(":/new/images/timg/"+ui->sub39->currentText()+" Rush.png");
        ui->spe39pic->setPixmap(picSpe39);
    }
    QPixmap picSub39(":/new/images/timg/"+ui->sub39->currentText()+".png");
    ui->sub39pic->setPixmap(picSub39);
    if (ui->spe40->currentIndex()==0){
        QPixmap picSpe40(":/new/images/timg/"+ui->sub40->currentText()+" Rush.png");
        ui->spe40pic->setPixmap(picSpe40);
    }
    QPixmap picSub40(":/new/images/timg/"+ui->sub40->currentText()+".png");
    ui->sub40pic->setPixmap(picSub40);
    if (ui->spe41->currentIndex()==0){
        QPixmap picSpe41(":/new/images/timg/"+ui->sub41->currentText()+" Rush.png");
        ui->spe41pic->setPixmap(picSpe41);
    }
    QPixmap picSub41(":/new/images/timg/"+ui->sub41->currentText()+".png");
    ui->sub41pic->setPixmap(picSub41);
    if (ui->spe42->currentIndex()==0){
        QPixmap picSpe42(":/new/images/timg/"+ui->sub42->currentText()+" Rush.png");
        ui->spe42pic->setPixmap(picSpe42);
    }
    QPixmap picSub42(":/new/images/timg/"+ui->sub42->currentText()+".png");
    ui->sub42pic->setPixmap(picSub42);
    if (ui->spe43->currentIndex()==0){
        QPixmap picSpe43(":/new/images/timg/"+ui->sub43->currentText()+" Rush.png");
        ui->spe43pic->setPixmap(picSpe43);
    }
    QPixmap picSub43(":/new/images/timg/"+ui->sub43->currentText()+".png");
    ui->sub43pic->setPixmap(picSub43);
    if (ui->spe44->currentIndex()==0){
        QPixmap picSpe44(":/new/images/timg/"+ui->sub44->currentText()+" Rush.png");
        ui->spe44pic->setPixmap(picSpe44);
    }
    QPixmap picSub44(":/new/images/timg/"+ui->sub44->currentText()+".png");
    ui->sub44pic->setPixmap(picSub44);
    if (ui->spe45->currentIndex()==0){
        QPixmap picSpe45(":/new/images/timg/"+ui->sub45->currentText()+" Rush.png");
        ui->spe45pic->setPixmap(picSpe45);
    }
    QPixmap picSub45(":/new/images/timg/"+ui->sub45->currentText()+".png");
    ui->sub45pic->setPixmap(picSub45);
    if (ui->spe46->currentIndex()==0){
        QPixmap picSpe46(":/new/images/timg/"+ui->sub46->currentText()+" Rush.png");
        ui->spe46pic->setPixmap(picSpe46);
    }
    QPixmap picSub46(":/new/images/timg/"+ui->sub46->currentText()+".png");
    ui->sub46pic->setPixmap(picSub46);
    if (ui->spe47->currentIndex()==0){
        QPixmap picSpe47(":/new/images/timg/"+ui->sub47->currentText()+" Rush.png");
        ui->spe47pic->setPixmap(picSpe47);
    }
    QPixmap picSub47(":/new/images/timg/"+ui->sub47->currentText()+".png");
    ui->sub47pic->setPixmap(picSub47);
    if (ui->spe48->currentIndex()==0){
        QPixmap picSpe48(":/new/images/timg/"+ui->sub48->currentText()+" Rush.png");
        ui->spe48pic->setPixmap(picSpe48);
    }
    QPixmap picSub48(":/new/images/timg/"+ui->sub48->currentText()+".png");
    ui->sub48pic->setPixmap(picSub48);
    if (ui->spe49->currentIndex()==0){
        QPixmap picSpe49(":/new/images/timg/"+ui->sub49->currentText()+" Rush.png");
        ui->spe49pic->setPixmap(picSpe49);
    }
    QPixmap picSub49(":/new/images/timg/"+ui->sub49->currentText()+".png");
    ui->sub49pic->setPixmap(picSub49);
    if (ui->spe50->currentIndex()==0){
        QPixmap picSpe50(":/new/images/timg/"+ui->sub50->currentText()+" Rush.png");
        ui->spe50pic->setPixmap(picSpe50);
    }
    QPixmap picSub50(":/new/images/timg/"+ui->sub50->currentText()+".png");
    ui->sub50pic->setPixmap(picSub50);
    if (ui->spe51->currentIndex()==0){
        QPixmap picSpe51(":/new/images/timg/"+ui->sub51->currentText()+" Rush.png");
        ui->spe51pic->setPixmap(picSpe51);
    }
    QPixmap picSub51(":/new/images/timg/"+ui->sub51->currentText()+".png");
    ui->sub51pic->setPixmap(picSub51);
    if (ui->spe52->currentIndex()==0){
        QPixmap picSpe52(":/new/images/timg/"+ui->sub52->currentText()+" Rush.png");
        ui->spe52pic->setPixmap(picSpe52);
    }
    QPixmap picSub52(":/new/images/timg/"+ui->sub52->currentText()+".png");
    ui->sub52pic->setPixmap(picSub52);
    if (ui->spe53->currentIndex()==0){
        QPixmap picSpe53(":/new/images/timg/"+ui->sub53->currentText()+" Rush.png");
        ui->spe53pic->setPixmap(picSpe53);
    }
    QPixmap picSub53(":/new/images/timg/"+ui->sub53->currentText()+".png");
    ui->sub53pic->setPixmap(picSub53);
    if (ui->spe54->currentIndex()==0){
        QPixmap picSpe54(":/new/images/timg/"+ui->sub54->currentText()+" Rush.png");
        ui->spe54pic->setPixmap(picSpe54);
    }
    QPixmap picSub54(":/new/images/timg/"+ui->sub54->currentText()+".png");
    ui->sub54pic->setPixmap(picSub54);
    if (ui->spe55->currentIndex()==0){
        QPixmap picSpe55(":/new/images/timg/"+ui->sub55->currentText()+" Rush.png");
        ui->spe55pic->setPixmap(picSpe55);
    }
    QPixmap picSub55(":/new/images/timg/"+ui->sub55->currentText()+".png");
    ui->sub55pic->setPixmap(picSub55);
    if (ui->spe56->currentIndex()==0){
        QPixmap picSpe56(":/new/images/timg/"+ui->sub56->currentText()+" Rush.png");
        ui->spe56pic->setPixmap(picSpe56);
    }
    QPixmap picSub56(":/new/images/timg/"+ui->sub56->currentText()+".png");
    ui->sub56pic->setPixmap(picSub56);
    if (ui->spe57->currentIndex()==0){
        QPixmap picSpe57(":/new/images/timg/"+ui->sub57->currentText()+" Rush.png");
        ui->spe57pic->setPixmap(picSpe57);
    }
    QPixmap picSub57(":/new/images/timg/"+ui->sub57->currentText()+".png");
    ui->sub57pic->setPixmap(picSub57);
    if (ui->spe58->currentIndex()==0){
        QPixmap picSpe58(":/new/images/timg/"+ui->sub58->currentText()+" Rush.png");
        ui->spe58pic->setPixmap(picSpe58);
    }
    QPixmap picSub58(":/new/images/timg/"+ui->sub58->currentText()+".png");
    ui->sub58pic->setPixmap(picSub58);
    if (ui->spe59->currentIndex()==0){
        QPixmap picSpe59(":/new/images/timg/"+ui->sub59->currentText()+" Rush.png");
        ui->spe59pic->setPixmap(picSpe59);
    }
    QPixmap picSub59(":/new/images/timg/"+ui->sub59->currentText()+".png");
    ui->sub59pic->setPixmap(picSub59);
    if (ui->spe60->currentIndex()==0){
        QPixmap picSpe60(":/new/images/timg/"+ui->sub60->currentText()+" Rush.png");
        ui->spe60pic->setPixmap(picSpe60);
    }
    QPixmap picSub60(":/new/images/timg/"+ui->sub60->currentText()+".png");
    ui->sub60pic->setPixmap(picSub60);
    if (ui->spe61->currentIndex()==0){
        QPixmap picSpe61(":/new/images/timg/"+ui->sub61->currentText()+" Rush.png");
        ui->spe61pic->setPixmap(picSpe61);
    }
    QPixmap picSub61(":/new/images/timg/"+ui->sub61->currentText()+".png");
    ui->sub61pic->setPixmap(picSub61);
    if (ui->spe62->currentIndex()==0){
        QPixmap picSpe62(":/new/images/timg/"+ui->sub62->currentText()+" Rush.png");
        ui->spe62pic->setPixmap(picSpe62);
    }
    QPixmap picSub62(":/new/images/timg/"+ui->sub62->currentText()+".png");
    ui->sub62pic->setPixmap(picSub62);
    if (ui->spe63->currentIndex()==0){
        QPixmap picSpe63(":/new/images/timg/"+ui->sub63->currentText()+" Rush.png");
        ui->spe63pic->setPixmap(picSpe63);
    }
    QPixmap picSub63(":/new/images/timg/"+ui->sub63->currentText()+".png");
    ui->sub63pic->setPixmap(picSub63);
    if (ui->spe64->currentIndex()==0){
        QPixmap picSpe64(":/new/images/timg/"+ui->sub64->currentText()+" Rush.png");
        ui->spe64pic->setPixmap(picSpe64);
    }
    QPixmap picSub64(":/new/images/timg/"+ui->sub64->currentText()+".png");
    ui->sub64pic->setPixmap(picSub64);
    if (ui->spe65->currentIndex()==0){
        QPixmap picSpe65(":/new/images/timg/"+ui->sub65->currentText()+" Rush.png");
        ui->spe65pic->setPixmap(picSpe65);
    }
    QPixmap picSub65(":/new/images/timg/"+ui->sub65->currentText()+".png");
    ui->sub65pic->setPixmap(picSub65);
    if (ui->spe66->currentIndex()==0){
        QPixmap picSpe66(":/new/images/timg/"+ui->sub66->currentText()+" Rush.png");
        ui->spe66pic->setPixmap(picSpe66);
    }
    QPixmap picSub66(":/new/images/timg/"+ui->sub66->currentText()+".png");
    ui->sub66pic->setPixmap(picSub66);
    if (ui->spe67->currentIndex()==0){
        QPixmap picSpe67(":/new/images/timg/"+ui->sub67->currentText()+" Rush.png");
        ui->spe67pic->setPixmap(picSpe67);
    }
    QPixmap picSub67(":/new/images/timg/"+ui->sub67->currentText()+".png");
    ui->sub67pic->setPixmap(picSub67);
    if (ui->spe68->currentIndex()==0){
        QPixmap picSpe68(":/new/images/timg/"+ui->sub68->currentText()+" Rush.png");
        ui->spe68pic->setPixmap(picSpe68);
    }
    QPixmap picSub68(":/new/images/timg/"+ui->sub68->currentText()+".png");
    ui->sub68pic->setPixmap(picSub68);
    if (ui->spe69->currentIndex()==0){
        QPixmap picSpe69(":/new/images/timg/"+ui->sub69->currentText()+" Rush.png");
        ui->spe69pic->setPixmap(picSpe69);
    }
    QPixmap picSub69(":/new/images/timg/"+ui->sub69->currentText()+".png");
    ui->sub69pic->setPixmap(picSub69);
    if (ui->spe70->currentIndex()==0){
        QPixmap picSpe70(":/new/images/timg/"+ui->sub70->currentText()+" Rush.png");
        ui->spe70pic->setPixmap(picSpe70);
    }
    QPixmap picSub70(":/new/images/timg/"+ui->sub70->currentText()+".png");
    ui->sub70pic->setPixmap(picSub70);
    if (ui->spe71->currentIndex()==0){
        QPixmap picSpe71(":/new/images/timg/"+ui->sub71->currentText()+" Rush.png");
        ui->spe71pic->setPixmap(picSpe71);
    }
    QPixmap picSub71(":/new/images/timg/"+ui->sub71->currentText()+".png");
    ui->sub71pic->setPixmap(picSub71);
    if (ui->spe72->currentIndex()==0){
        QPixmap picSpe72(":/new/images/timg/"+ui->sub72->currentText()+" Rush.png");
        ui->spe72pic->setPixmap(picSpe72);
    }
    QPixmap picSub72(":/new/images/timg/"+ui->sub72->currentText()+".png");
    ui->sub72pic->setPixmap(picSub72);
    if (ui->spe73->currentIndex()==0){
        QPixmap picSpe73(":/new/images/timg/"+ui->sub73->currentText()+" Rush.png");
        ui->spe73pic->setPixmap(picSpe73);
    }
    QPixmap picSub73(":/new/images/timg/"+ui->sub73->currentText()+".png");
    ui->sub73pic->setPixmap(picSub73);
    if (ui->spe74->currentIndex()==0){
        QPixmap picSpe74(":/new/images/timg/"+ui->sub74->currentText()+" Rush.png");
        ui->spe74pic->setPixmap(picSpe74);
    }
    QPixmap picSub74(":/new/images/timg/"+ui->sub74->currentText()+".png");
    ui->sub74pic->setPixmap(picSub74);
    if (ui->spe75->currentIndex()==0){
        QPixmap picSpe75(":/new/images/timg/"+ui->sub75->currentText()+" Rush.png");
        ui->spe75pic->setPixmap(picSpe75);
    }
    QPixmap picSub75(":/new/images/timg/"+ui->sub75->currentText()+".png");
    ui->sub75pic->setPixmap(picSub75);
    if (ui->spe76->currentIndex()==0){
        QPixmap picSpe76(":/new/images/timg/"+ui->sub76->currentText()+" Rush.png");
        ui->spe76pic->setPixmap(picSpe76);
    }
    QPixmap picSub76(":/new/images/timg/"+ui->sub76->currentText()+".png");
    ui->sub76pic->setPixmap(picSub76);
    if (ui->spe77->currentIndex()==0){
        QPixmap picSpe77(":/new/images/timg/"+ui->sub77->currentText()+" Rush.png");
        ui->spe77pic->setPixmap(picSpe77);
    }
    QPixmap picSub77(":/new/images/timg/"+ui->sub77->currentText()+".png");
    ui->sub77pic->setPixmap(picSub77);
    if (ui->spe78->currentIndex()==0){
        QPixmap picSpe78(":/new/images/timg/"+ui->sub78->currentText()+" Rush.png");
        ui->spe78pic->setPixmap(picSpe78);
    }
    QPixmap picSub78(":/new/images/timg/"+ui->sub78->currentText()+".png");
    ui->sub78pic->setPixmap(picSub78);
    if (ui->spe79->currentIndex()==0){
        QPixmap picSpe79(":/new/images/timg/"+ui->sub79->currentText()+" Rush.png");
        ui->spe79pic->setPixmap(picSpe79);
    }
    QPixmap picSub79(":/new/images/timg/"+ui->sub79->currentText()+".png");
    ui->sub79pic->setPixmap(picSub79);
    if (ui->spe80->currentIndex()==0){
        QPixmap picSpe80(":/new/images/timg/"+ui->sub80->currentText()+" Rush.png");
        ui->spe80pic->setPixmap(picSpe80);
    }
    QPixmap picSub80(":/new/images/timg/"+ui->sub80->currentText()+".png");
    ui->sub80pic->setPixmap(picSub80);
    if (ui->spe81->currentIndex()==0){
        QPixmap picSpe81(":/new/images/timg/"+ui->sub81->currentText()+" Rush.png");
        ui->spe81pic->setPixmap(picSpe81);
    }
    QPixmap picSub81(":/new/images/timg/"+ui->sub81->currentText()+".png");
    ui->sub81pic->setPixmap(picSub81);
    if (ui->spe82->currentIndex()==0){
        QPixmap picSpe82(":/new/images/timg/"+ui->sub82->currentText()+" Rush.png");
        ui->spe82pic->setPixmap(picSpe82);
    }
    QPixmap picSub82(":/new/images/timg/"+ui->sub82->currentText()+".png");
    ui->sub82pic->setPixmap(picSub82);
    if (ui->spe83->currentIndex()==0){
        QPixmap picSpe83(":/new/images/timg/"+ui->sub83->currentText()+" Rush.png");
        ui->spe83pic->setPixmap(picSpe83);
    }
    QPixmap picSub83(":/new/images/timg/"+ui->sub83->currentText()+".png");
    ui->sub83pic->setPixmap(picSub83);
    if (ui->spe84->currentIndex()==0){
        QPixmap picSpe84(":/new/images/timg/"+ui->sub84->currentText()+" Rush.png");
        ui->spe84pic->setPixmap(picSpe84);
    }
    QPixmap picSub84(":/new/images/timg/"+ui->sub84->currentText()+".png");
    ui->sub84pic->setPixmap(picSub84);
    if (ui->spe85->currentIndex()==0){
        QPixmap picSpe85(":/new/images/timg/"+ui->sub85->currentText()+" Rush.png");
        ui->spe85pic->setPixmap(picSpe85);
    }
    QPixmap picSub85(":/new/images/timg/"+ui->sub85->currentText()+".png");
    ui->sub85pic->setPixmap(picSub85);
    if (ui->spe86->currentIndex()==0){
        QPixmap picSpe86(":/new/images/timg/"+ui->sub86->currentText()+" Rush.png");
        ui->spe86pic->setPixmap(picSpe86);
    }
    QPixmap picSub86(":/new/images/timg/"+ui->sub86->currentText()+".png");
    ui->sub86pic->setPixmap(picSub86);
    if (ui->spe87->currentIndex()==0){
        QPixmap picSpe87(":/new/images/timg/"+ui->sub87->currentText()+" Rush.png");
        ui->spe87pic->setPixmap(picSpe87);
    }
    QPixmap picSub87(":/new/images/timg/"+ui->sub87->currentText()+".png");
    ui->sub87pic->setPixmap(picSub87);
    if (ui->spe88->currentIndex()==0){
        QPixmap picSpe88(":/new/images/timg/"+ui->sub88->currentText()+" Rush.png");
        ui->spe88pic->setPixmap(picSpe88);
    }
    QPixmap picSub88(":/new/images/timg/"+ui->sub88->currentText()+".png");
    ui->sub88pic->setPixmap(picSub88);
    if (ui->spe89->currentIndex()==0){
        QPixmap picSpe89(":/new/images/timg/"+ui->sub89->currentText()+" Rush.png");
        ui->spe89pic->setPixmap(picSpe89);
    }
    QPixmap picSub89(":/new/images/timg/"+ui->sub89->currentText()+".png");
    ui->sub89pic->setPixmap(picSub89);
    if (ui->spe90->currentIndex()==0){
        QPixmap picSpe90(":/new/images/timg/"+ui->sub90->currentText()+" Rush.png");
        ui->spe90pic->setPixmap(picSpe90);
    }
    QPixmap picSub90(":/new/images/timg/"+ui->sub90->currentText()+".png");
    ui->sub90pic->setPixmap(picSub90);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rPageS_clicked()
{
    ui->stackedWidgetS->setCurrentIndex(ui->stackedWidgetS->currentIndex()+1);
}

void MainWindow::on_lPageS_clicked()
{

    ui->stackedWidgetS->setCurrentIndex(ui->stackedWidgetS->currentIndex()-1);
}

void MainWindow::on_rPageB_clicked()
{
    ui->stackedWidgetB->setCurrentIndex(ui->stackedWidgetB->currentIndex()+1);
}

void MainWindow::on_lPageB_clicked()
{

    ui->stackedWidgetB->setCurrentIndex(ui->stackedWidgetB->currentIndex()-1);
}

void MainWindow::on_rPageR_clicked()
{
    ui->stackedWidgetR->setCurrentIndex(ui->stackedWidgetR->currentIndex()+1);
}

void MainWindow::on_lPageR_clicked()
{

    ui->stackedWidgetR->setCurrentIndex(ui->stackedWidgetR->currentIndex()-1);
}

void MainWindow::on_rPageC_clicked()
{
    ui->stackedWidgetC->setCurrentIndex(ui->stackedWidgetC->currentIndex()+1);
}

void MainWindow::on_lPageC_clicked()
{

    ui->stackedWidgetC->setCurrentIndex(ui->stackedWidgetC->currentIndex()-1);
}

void MainWindow::on_sub0_currentIndexChanged()
{
    if (ui->spe0->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub0->currentText()+" Rush.png");
        ui->spe0pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub0->currentText()+".png");
    ui->sub0pic->setPixmap(picSub);
}
void MainWindow::on_spe0_currentIndexChanged()
{
    if (ui->spe0->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub0->currentText()+" Rush.png");
        ui->spe0pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe0->currentText()+".png");
        ui->spe0pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub1_currentIndexChanged()
{
    if (ui->spe1->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub1->currentText()+" Rush.png");
        ui->spe1pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub1->currentText()+".png");
    ui->sub1pic->setPixmap(picSub);
}
void MainWindow::on_spe1_currentIndexChanged()
{
    if (ui->spe1->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub1->currentText()+" Rush.png");
        ui->spe1pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe1->currentText()+".png");
        ui->spe1pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub2_currentIndexChanged()
{
    if (ui->spe2->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub2->currentText()+" Rush.png");
        ui->spe2pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub2->currentText()+".png");
    ui->sub2pic->setPixmap(picSub);
}
void MainWindow::on_spe2_currentIndexChanged()
{
    if (ui->spe2->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub2->currentText()+" Rush.png");
        ui->spe2pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe2->currentText()+".png");
        ui->spe2pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub3_currentIndexChanged()
{
    if (ui->spe3->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub3->currentText()+" Rush.png");
        ui->spe3pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub3->currentText()+".png");
    ui->sub3pic->setPixmap(picSub);
}
void MainWindow::on_spe3_currentIndexChanged()
{
    if (ui->spe3->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub3->currentText()+" Rush.png");
        ui->spe3pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe3->currentText()+".png");
        ui->spe3pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub4_currentIndexChanged()
{
    if (ui->spe4->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub4->currentText()+" Rush.png");
        ui->spe4pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub4->currentText()+".png");
    ui->sub4pic->setPixmap(picSub);
}
void MainWindow::on_spe4_currentIndexChanged()
{
    if (ui->spe4->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub4->currentText()+" Rush.png");
        ui->spe4pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe4->currentText()+".png");
        ui->spe4pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub5_currentIndexChanged()
{
    if (ui->spe5->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub5->currentText()+" Rush.png");
        ui->spe5pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub5->currentText()+".png");
    ui->sub5pic->setPixmap(picSub);
}
void MainWindow::on_spe5_currentIndexChanged()
{
    if (ui->spe5->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub5->currentText()+" Rush.png");
        ui->spe5pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe5->currentText()+".png");
        ui->spe5pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub6_currentIndexChanged()
{
    if (ui->spe6->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub6->currentText()+" Rush.png");
        ui->spe6pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub6->currentText()+".png");
    ui->sub6pic->setPixmap(picSub);
}
void MainWindow::on_spe6_currentIndexChanged()
{
    if (ui->spe6->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub6->currentText()+" Rush.png");
        ui->spe6pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe6->currentText()+".png");
        ui->spe6pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub7_currentIndexChanged()
{
    if (ui->spe7->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub7->currentText()+" Rush.png");
        ui->spe7pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub7->currentText()+".png");
    ui->sub7pic->setPixmap(picSub);
}
void MainWindow::on_spe7_currentIndexChanged()
{
    if (ui->spe7->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub7->currentText()+" Rush.png");
        ui->spe7pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe7->currentText()+".png");
        ui->spe7pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub8_currentIndexChanged()
{
    if (ui->spe8->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub8->currentText()+" Rush.png");
        ui->spe8pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub8->currentText()+".png");
    ui->sub8pic->setPixmap(picSub);
}
void MainWindow::on_spe8_currentIndexChanged()
{
    if (ui->spe8->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub8->currentText()+" Rush.png");
        ui->spe8pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe8->currentText()+".png");
        ui->spe8pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub9_currentIndexChanged()
{
    if (ui->spe9->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub9->currentText()+" Rush.png");
        ui->spe9pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub9->currentText()+".png");
    ui->sub9pic->setPixmap(picSub);
}
void MainWindow::on_spe9_currentIndexChanged()
{
    if (ui->spe9->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub9->currentText()+" Rush.png");
        ui->spe9pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe9->currentText()+".png");
        ui->spe9pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub10_currentIndexChanged()
{
    if (ui->spe10->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub10->currentText()+" Rush.png");
        ui->spe10pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub10->currentText()+".png");
    ui->sub10pic->setPixmap(picSub);
}
void MainWindow::on_spe10_currentIndexChanged()
{
    if (ui->spe10->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub10->currentText()+" Rush.png");
        ui->spe10pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe10->currentText()+".png");
        ui->spe10pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub11_currentIndexChanged()
{
    if (ui->spe11->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub11->currentText()+" Rush.png");
        ui->spe11pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub11->currentText()+".png");
    ui->sub11pic->setPixmap(picSub);
}
void MainWindow::on_spe11_currentIndexChanged()
{
    if (ui->spe11->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub11->currentText()+" Rush.png");
        ui->spe11pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe11->currentText()+".png");
        ui->spe11pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub12_currentIndexChanged()
{
    if (ui->spe12->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub12->currentText()+" Rush.png");
        ui->spe12pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub12->currentText()+".png");
    ui->sub12pic->setPixmap(picSub);
}
void MainWindow::on_spe12_currentIndexChanged()
{
    if (ui->spe12->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub12->currentText()+" Rush.png");
        ui->spe12pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe12->currentText()+".png");
        ui->spe12pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub13_currentIndexChanged()
{
    if (ui->spe13->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub13->currentText()+" Rush.png");
        ui->spe13pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub13->currentText()+".png");
    ui->sub13pic->setPixmap(picSub);
}
void MainWindow::on_spe13_currentIndexChanged()
{
    if (ui->spe13->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub13->currentText()+" Rush.png");
        ui->spe13pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe13->currentText()+".png");
        ui->spe13pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub14_currentIndexChanged()
{
    if (ui->spe14->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub14->currentText()+" Rush.png");
        ui->spe14pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub14->currentText()+".png");
    ui->sub14pic->setPixmap(picSub);
}
void MainWindow::on_spe14_currentIndexChanged()
{
    if (ui->spe14->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub14->currentText()+" Rush.png");
        ui->spe14pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe14->currentText()+".png");
        ui->spe14pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub15_currentIndexChanged()
{
    if (ui->spe15->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub15->currentText()+" Rush.png");
        ui->spe15pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub15->currentText()+".png");
    ui->sub15pic->setPixmap(picSub);
}
void MainWindow::on_spe15_currentIndexChanged()
{
    if (ui->spe15->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub15->currentText()+" Rush.png");
        ui->spe15pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe15->currentText()+".png");
        ui->spe15pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub16_currentIndexChanged()
{
    if (ui->spe16->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub16->currentText()+" Rush.png");
        ui->spe16pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub16->currentText()+".png");
    ui->sub16pic->setPixmap(picSub);
}
void MainWindow::on_spe16_currentIndexChanged()
{
    if (ui->spe16->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub16->currentText()+" Rush.png");
        ui->spe16pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe16->currentText()+".png");
        ui->spe16pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub17_currentIndexChanged()
{
    if (ui->spe17->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub17->currentText()+" Rush.png");
        ui->spe17pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub17->currentText()+".png");
    ui->sub17pic->setPixmap(picSub);
}
void MainWindow::on_spe17_currentIndexChanged()
{
    if (ui->spe17->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub17->currentText()+" Rush.png");
        ui->spe17pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe17->currentText()+".png");
        ui->spe17pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub18_currentIndexChanged()
{
    if (ui->spe18->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub18->currentText()+" Rush.png");
        ui->spe18pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub18->currentText()+".png");
    ui->sub18pic->setPixmap(picSub);
}
void MainWindow::on_spe18_currentIndexChanged()
{
    if (ui->spe18->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub18->currentText()+" Rush.png");
        ui->spe18pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe18->currentText()+".png");
        ui->spe18pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub19_currentIndexChanged()
{
    if (ui->spe19->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub19->currentText()+" Rush.png");
        ui->spe19pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub19->currentText()+".png");
    ui->sub19pic->setPixmap(picSub);
}
void MainWindow::on_spe19_currentIndexChanged()
{
    if (ui->spe19->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub19->currentText()+" Rush.png");
        ui->spe19pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe19->currentText()+".png");
        ui->spe19pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub20_currentIndexChanged()
{
    if (ui->spe20->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub20->currentText()+" Rush.png");
        ui->spe20pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub20->currentText()+".png");
    ui->sub20pic->setPixmap(picSub);
}
void MainWindow::on_spe20_currentIndexChanged()
{
    if (ui->spe20->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub20->currentText()+" Rush.png");
        ui->spe20pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe20->currentText()+".png");
        ui->spe20pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub21_currentIndexChanged()
{
    if (ui->spe21->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub21->currentText()+" Rush.png");
        ui->spe21pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub21->currentText()+".png");
    ui->sub21pic->setPixmap(picSub);
}
void MainWindow::on_spe21_currentIndexChanged()
{
    if (ui->spe21->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub21->currentText()+" Rush.png");
        ui->spe21pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe21->currentText()+".png");
        ui->spe21pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub22_currentIndexChanged()
{
    if (ui->spe22->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub22->currentText()+" Rush.png");
        ui->spe22pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub22->currentText()+".png");
    ui->sub22pic->setPixmap(picSub);
}
void MainWindow::on_spe22_currentIndexChanged()
{
    if (ui->spe22->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub22->currentText()+" Rush.png");
        ui->spe22pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe22->currentText()+".png");
        ui->spe22pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub23_currentIndexChanged()
{
    if (ui->spe23->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub23->currentText()+" Rush.png");
        ui->spe23pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub23->currentText()+".png");
    ui->sub23pic->setPixmap(picSub);
}
void MainWindow::on_spe23_currentIndexChanged()
{
    if (ui->spe23->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub23->currentText()+" Rush.png");
        ui->spe23pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe23->currentText()+".png");
        ui->spe23pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub24_currentIndexChanged()
{
    if (ui->spe24->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub24->currentText()+" Rush.png");
        ui->spe24pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub24->currentText()+".png");
    ui->sub24pic->setPixmap(picSub);
}
void MainWindow::on_spe24_currentIndexChanged()
{
    if (ui->spe24->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub24->currentText()+" Rush.png");
        ui->spe24pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe24->currentText()+".png");
        ui->spe24pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub25_currentIndexChanged()
{
    if (ui->spe25->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub25->currentText()+" Rush.png");
        ui->spe25pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub25->currentText()+".png");
    ui->sub25pic->setPixmap(picSub);
}
void MainWindow::on_spe25_currentIndexChanged()
{
    if (ui->spe25->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub25->currentText()+" Rush.png");
        ui->spe25pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe25->currentText()+".png");
        ui->spe25pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub26_currentIndexChanged()
{
    if (ui->spe26->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub26->currentText()+" Rush.png");
        ui->spe26pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub26->currentText()+".png");
    ui->sub26pic->setPixmap(picSub);
}
void MainWindow::on_spe26_currentIndexChanged()
{
    if (ui->spe26->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub26->currentText()+" Rush.png");
        ui->spe26pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe26->currentText()+".png");
        ui->spe26pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub27_currentIndexChanged()
{
    if (ui->spe27->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub27->currentText()+" Rush.png");
        ui->spe27pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub27->currentText()+".png");
    ui->sub27pic->setPixmap(picSub);
}
void MainWindow::on_spe27_currentIndexChanged()
{
    if (ui->spe27->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub27->currentText()+" Rush.png");
        ui->spe27pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe27->currentText()+".png");
        ui->spe27pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub28_currentIndexChanged()
{
    if (ui->spe28->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub28->currentText()+" Rush.png");
        ui->spe28pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub28->currentText()+".png");
    ui->sub28pic->setPixmap(picSub);
}
void MainWindow::on_spe28_currentIndexChanged()
{
    if (ui->spe28->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub28->currentText()+" Rush.png");
        ui->spe28pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe28->currentText()+".png");
        ui->spe28pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub29_currentIndexChanged()
{
    if (ui->spe29->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub29->currentText()+" Rush.png");
        ui->spe29pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub29->currentText()+".png");
    ui->sub29pic->setPixmap(picSub);
}
void MainWindow::on_spe29_currentIndexChanged()
{
    if (ui->spe29->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub29->currentText()+" Rush.png");
        ui->spe29pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe29->currentText()+".png");
        ui->spe29pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub30_currentIndexChanged()
{
    if (ui->spe30->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub30->currentText()+" Rush.png");
        ui->spe30pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub30->currentText()+".png");
    ui->sub30pic->setPixmap(picSub);
}
void MainWindow::on_spe30_currentIndexChanged()
{
    if (ui->spe30->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub30->currentText()+" Rush.png");
        ui->spe30pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe30->currentText()+".png");
        ui->spe30pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub31_currentIndexChanged()
{
    if (ui->spe31->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub31->currentText()+" Rush.png");
        ui->spe31pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub31->currentText()+".png");
    ui->sub31pic->setPixmap(picSub);
}
void MainWindow::on_spe31_currentIndexChanged()
{
    if (ui->spe31->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub31->currentText()+" Rush.png");
        ui->spe31pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe31->currentText()+".png");
        ui->spe31pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub32_currentIndexChanged()
{
    if (ui->spe32->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub32->currentText()+" Rush.png");
        ui->spe32pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub32->currentText()+".png");
    ui->sub32pic->setPixmap(picSub);
}
void MainWindow::on_spe32_currentIndexChanged()
{
    if (ui->spe32->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub32->currentText()+" Rush.png");
        ui->spe32pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe32->currentText()+".png");
        ui->spe32pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub33_currentIndexChanged()
{
    if (ui->spe33->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub33->currentText()+" Rush.png");
        ui->spe33pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub33->currentText()+".png");
    ui->sub33pic->setPixmap(picSub);
}
void MainWindow::on_spe33_currentIndexChanged()
{
    if (ui->spe33->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub33->currentText()+" Rush.png");
        ui->spe33pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe33->currentText()+".png");
        ui->spe33pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub34_currentIndexChanged()
{
    if (ui->spe34->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub34->currentText()+" Rush.png");
        ui->spe34pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub34->currentText()+".png");
    ui->sub34pic->setPixmap(picSub);
}
void MainWindow::on_spe34_currentIndexChanged()
{
    if (ui->spe34->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub34->currentText()+" Rush.png");
        ui->spe34pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe34->currentText()+".png");
        ui->spe34pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub35_currentIndexChanged()
{
    if (ui->spe35->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub35->currentText()+" Rush.png");
        ui->spe35pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub35->currentText()+".png");
    ui->sub35pic->setPixmap(picSub);
}
void MainWindow::on_spe35_currentIndexChanged()
{
    if (ui->spe35->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub35->currentText()+" Rush.png");
        ui->spe35pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe35->currentText()+".png");
        ui->spe35pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub36_currentIndexChanged()
{
    if (ui->spe36->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub36->currentText()+" Rush.png");
        ui->spe36pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub36->currentText()+".png");
    ui->sub36pic->setPixmap(picSub);
}
void MainWindow::on_spe36_currentIndexChanged()
{
    if (ui->spe36->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub36->currentText()+" Rush.png");
        ui->spe36pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe36->currentText()+".png");
        ui->spe36pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub37_currentIndexChanged()
{
    if (ui->spe37->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub37->currentText()+" Rush.png");
        ui->spe37pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub37->currentText()+".png");
    ui->sub37pic->setPixmap(picSub);
}
void MainWindow::on_spe37_currentIndexChanged()
{
    if (ui->spe37->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub37->currentText()+" Rush.png");
        ui->spe37pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe37->currentText()+".png");
        ui->spe37pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub38_currentIndexChanged()
{
    if (ui->spe38->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub38->currentText()+" Rush.png");
        ui->spe38pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub38->currentText()+".png");
    ui->sub38pic->setPixmap(picSub);
}
void MainWindow::on_spe38_currentIndexChanged()
{
    if (ui->spe38->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub38->currentText()+" Rush.png");
        ui->spe38pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe38->currentText()+".png");
        ui->spe38pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub39_currentIndexChanged()
{
    if (ui->spe39->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub39->currentText()+" Rush.png");
        ui->spe39pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub39->currentText()+".png");
    ui->sub39pic->setPixmap(picSub);
}
void MainWindow::on_spe39_currentIndexChanged()
{
    if (ui->spe39->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub39->currentText()+" Rush.png");
        ui->spe39pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe39->currentText()+".png");
        ui->spe39pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub40_currentIndexChanged()
{
    if (ui->spe40->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub40->currentText()+" Rush.png");
        ui->spe40pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub40->currentText()+".png");
    ui->sub40pic->setPixmap(picSub);
}
void MainWindow::on_spe40_currentIndexChanged()
{
    if (ui->spe40->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub40->currentText()+" Rush.png");
        ui->spe40pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe40->currentText()+".png");
        ui->spe40pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub41_currentIndexChanged()
{
    if (ui->spe41->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub41->currentText()+" Rush.png");
        ui->spe41pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub41->currentText()+".png");
    ui->sub41pic->setPixmap(picSub);
}
void MainWindow::on_spe41_currentIndexChanged()
{
    if (ui->spe41->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub41->currentText()+" Rush.png");
        ui->spe41pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe41->currentText()+".png");
        ui->spe41pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub42_currentIndexChanged()
{
    if (ui->spe42->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub42->currentText()+" Rush.png");
        ui->spe42pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub42->currentText()+".png");
    ui->sub42pic->setPixmap(picSub);
}
void MainWindow::on_spe42_currentIndexChanged()
{
    if (ui->spe42->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub42->currentText()+" Rush.png");
        ui->spe42pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe42->currentText()+".png");
        ui->spe42pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub43_currentIndexChanged()
{
    if (ui->spe43->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub43->currentText()+" Rush.png");
        ui->spe43pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub43->currentText()+".png");
    ui->sub43pic->setPixmap(picSub);
}
void MainWindow::on_spe43_currentIndexChanged()
{
    if (ui->spe43->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub43->currentText()+" Rush.png");
        ui->spe43pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe43->currentText()+".png");
        ui->spe43pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub44_currentIndexChanged()
{
    if (ui->spe44->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub44->currentText()+" Rush.png");
        ui->spe44pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub44->currentText()+".png");
    ui->sub44pic->setPixmap(picSub);
}
void MainWindow::on_spe44_currentIndexChanged()
{
    if (ui->spe44->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub44->currentText()+" Rush.png");
        ui->spe44pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe44->currentText()+".png");
        ui->spe44pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub45_currentIndexChanged()
{
    if (ui->spe45->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub45->currentText()+" Rush.png");
        ui->spe45pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub45->currentText()+".png");
    ui->sub45pic->setPixmap(picSub);
}
void MainWindow::on_spe45_currentIndexChanged()
{
    if (ui->spe45->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub45->currentText()+" Rush.png");
        ui->spe45pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe45->currentText()+".png");
        ui->spe45pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub46_currentIndexChanged()
{
    if (ui->spe46->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub46->currentText()+" Rush.png");
        ui->spe46pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub46->currentText()+".png");
    ui->sub46pic->setPixmap(picSub);
}
void MainWindow::on_spe46_currentIndexChanged()
{
    if (ui->spe46->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub46->currentText()+" Rush.png");
        ui->spe46pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe46->currentText()+".png");
        ui->spe46pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub47_currentIndexChanged()
{
    if (ui->spe47->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub47->currentText()+" Rush.png");
        ui->spe47pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub47->currentText()+".png");
    ui->sub47pic->setPixmap(picSub);
}
void MainWindow::on_spe47_currentIndexChanged()
{
    if (ui->spe47->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub47->currentText()+" Rush.png");
        ui->spe47pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe47->currentText()+".png");
        ui->spe47pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub48_currentIndexChanged()
{
    if (ui->spe48->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub48->currentText()+" Rush.png");
        ui->spe48pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub48->currentText()+".png");
    ui->sub48pic->setPixmap(picSub);
}
void MainWindow::on_spe48_currentIndexChanged()
{
    if (ui->spe48->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub48->currentText()+" Rush.png");
        ui->spe48pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe48->currentText()+".png");
        ui->spe48pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub49_currentIndexChanged()
{
    if (ui->spe49->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub49->currentText()+" Rush.png");
        ui->spe49pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub49->currentText()+".png");
    ui->sub49pic->setPixmap(picSub);
}
void MainWindow::on_spe49_currentIndexChanged()
{
    if (ui->spe49->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub49->currentText()+" Rush.png");
        ui->spe49pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe49->currentText()+".png");
        ui->spe49pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub50_currentIndexChanged()
{
    if (ui->spe50->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub50->currentText()+" Rush.png");
        ui->spe50pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub50->currentText()+".png");
    ui->sub50pic->setPixmap(picSub);
}
void MainWindow::on_spe50_currentIndexChanged()
{
    if (ui->spe50->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub50->currentText()+" Rush.png");
        ui->spe50pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe50->currentText()+".png");
        ui->spe50pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub51_currentIndexChanged()
{
    if (ui->spe51->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub51->currentText()+" Rush.png");
        ui->spe51pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub51->currentText()+".png");
    ui->sub51pic->setPixmap(picSub);
}
void MainWindow::on_spe51_currentIndexChanged()
{
    if (ui->spe51->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub51->currentText()+" Rush.png");
        ui->spe51pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe51->currentText()+".png");
        ui->spe51pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub52_currentIndexChanged()
{
    if (ui->spe52->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub52->currentText()+" Rush.png");
        ui->spe52pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub52->currentText()+".png");
    ui->sub52pic->setPixmap(picSub);
}
void MainWindow::on_spe52_currentIndexChanged()
{
    if (ui->spe52->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub52->currentText()+" Rush.png");
        ui->spe52pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe52->currentText()+".png");
        ui->spe52pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub53_currentIndexChanged()
{
    if (ui->spe53->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub53->currentText()+" Rush.png");
        ui->spe53pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub53->currentText()+".png");
    ui->sub53pic->setPixmap(picSub);
}
void MainWindow::on_spe53_currentIndexChanged()
{
    if (ui->spe53->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub53->currentText()+" Rush.png");
        ui->spe53pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe53->currentText()+".png");
        ui->spe53pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub54_currentIndexChanged()
{
    if (ui->spe54->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub54->currentText()+" Rush.png");
        ui->spe54pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub54->currentText()+".png");
    ui->sub54pic->setPixmap(picSub);
}
void MainWindow::on_spe54_currentIndexChanged()
{
    if (ui->spe54->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub54->currentText()+" Rush.png");
        ui->spe54pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe54->currentText()+".png");
        ui->spe54pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub55_currentIndexChanged()
{
    if (ui->spe55->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub55->currentText()+" Rush.png");
        ui->spe55pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub55->currentText()+".png");
    ui->sub55pic->setPixmap(picSub);
}
void MainWindow::on_spe55_currentIndexChanged()
{
    if (ui->spe55->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub55->currentText()+" Rush.png");
        ui->spe55pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe55->currentText()+".png");
        ui->spe55pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub56_currentIndexChanged()
{
    if (ui->spe56->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub56->currentText()+" Rush.png");
        ui->spe56pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub56->currentText()+".png");
    ui->sub56pic->setPixmap(picSub);
}
void MainWindow::on_spe56_currentIndexChanged()
{
    if (ui->spe56->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub56->currentText()+" Rush.png");
        ui->spe56pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe56->currentText()+".png");
        ui->spe56pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub57_currentIndexChanged()
{
    if (ui->spe57->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub57->currentText()+" Rush.png");
        ui->spe57pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub57->currentText()+".png");
    ui->sub57pic->setPixmap(picSub);
}
void MainWindow::on_spe57_currentIndexChanged()
{
    if (ui->spe57->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub57->currentText()+" Rush.png");
        ui->spe57pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe57->currentText()+".png");
        ui->spe57pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub58_currentIndexChanged()
{
    if (ui->spe58->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub58->currentText()+" Rush.png");
        ui->spe58pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub58->currentText()+".png");
    ui->sub58pic->setPixmap(picSub);
}
void MainWindow::on_spe58_currentIndexChanged()
{
    if (ui->spe58->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub58->currentText()+" Rush.png");
        ui->spe58pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe58->currentText()+".png");
        ui->spe58pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub59_currentIndexChanged()
{
    if (ui->spe59->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub59->currentText()+" Rush.png");
        ui->spe59pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub59->currentText()+".png");
    ui->sub59pic->setPixmap(picSub);
}
void MainWindow::on_spe59_currentIndexChanged()
{
    if (ui->spe59->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub59->currentText()+" Rush.png");
        ui->spe59pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe59->currentText()+".png");
        ui->spe59pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub60_currentIndexChanged()
{
    if (ui->spe60->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub60->currentText()+" Rush.png");
        ui->spe60pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub60->currentText()+".png");
    ui->sub60pic->setPixmap(picSub);
}
void MainWindow::on_spe60_currentIndexChanged()
{
    if (ui->spe60->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub60->currentText()+" Rush.png");
        ui->spe60pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe60->currentText()+".png");
        ui->spe60pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub61_currentIndexChanged()
{
    if (ui->spe61->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub61->currentText()+" Rush.png");
        ui->spe61pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub61->currentText()+".png");
    ui->sub61pic->setPixmap(picSub);
}
void MainWindow::on_spe61_currentIndexChanged()
{
    if (ui->spe61->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub61->currentText()+" Rush.png");
        ui->spe61pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe61->currentText()+".png");
        ui->spe61pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub62_currentIndexChanged()
{
    if (ui->spe62->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub62->currentText()+" Rush.png");
        ui->spe62pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub62->currentText()+".png");
    ui->sub62pic->setPixmap(picSub);
}
void MainWindow::on_spe62_currentIndexChanged()
{
    if (ui->spe62->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub62->currentText()+" Rush.png");
        ui->spe62pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe62->currentText()+".png");
        ui->spe62pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub63_currentIndexChanged()
{
    if (ui->spe63->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub63->currentText()+" Rush.png");
        ui->spe63pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub63->currentText()+".png");
    ui->sub63pic->setPixmap(picSub);
}
void MainWindow::on_spe63_currentIndexChanged()
{
    if (ui->spe63->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub63->currentText()+" Rush.png");
        ui->spe63pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe63->currentText()+".png");
        ui->spe63pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub64_currentIndexChanged()
{
    if (ui->spe64->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub64->currentText()+" Rush.png");
        ui->spe64pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub64->currentText()+".png");
    ui->sub64pic->setPixmap(picSub);
}
void MainWindow::on_spe64_currentIndexChanged()
{
    if (ui->spe64->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub64->currentText()+" Rush.png");
        ui->spe64pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe64->currentText()+".png");
        ui->spe64pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub65_currentIndexChanged()
{
    if (ui->spe65->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub65->currentText()+" Rush.png");
        ui->spe65pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub65->currentText()+".png");
    ui->sub65pic->setPixmap(picSub);
}
void MainWindow::on_spe65_currentIndexChanged()
{
    if (ui->spe65->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub65->currentText()+" Rush.png");
        ui->spe65pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe65->currentText()+".png");
        ui->spe65pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub66_currentIndexChanged()
{
    if (ui->spe66->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub66->currentText()+" Rush.png");
        ui->spe66pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub66->currentText()+".png");
    ui->sub66pic->setPixmap(picSub);
}
void MainWindow::on_spe66_currentIndexChanged()
{
    if (ui->spe66->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub66->currentText()+" Rush.png");
        ui->spe66pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe66->currentText()+".png");
        ui->spe66pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub67_currentIndexChanged()
{
    if (ui->spe67->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub67->currentText()+" Rush.png");
        ui->spe67pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub67->currentText()+".png");
    ui->sub67pic->setPixmap(picSub);
}
void MainWindow::on_spe67_currentIndexChanged()
{
    if (ui->spe67->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub67->currentText()+" Rush.png");
        ui->spe67pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe67->currentText()+".png");
        ui->spe67pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub68_currentIndexChanged()
{
    if (ui->spe68->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub68->currentText()+" Rush.png");
        ui->spe68pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub68->currentText()+".png");
    ui->sub68pic->setPixmap(picSub);
}
void MainWindow::on_spe68_currentIndexChanged()
{
    if (ui->spe68->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub68->currentText()+" Rush.png");
        ui->spe68pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe68->currentText()+".png");
        ui->spe68pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub69_currentIndexChanged()
{
    if (ui->spe69->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub69->currentText()+" Rush.png");
        ui->spe69pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub69->currentText()+".png");
    ui->sub69pic->setPixmap(picSub);
}
void MainWindow::on_spe69_currentIndexChanged()
{
    if (ui->spe69->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub69->currentText()+" Rush.png");
        ui->spe69pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe69->currentText()+".png");
        ui->spe69pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub70_currentIndexChanged()
{
    if (ui->spe70->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub70->currentText()+" Rush.png");
        ui->spe70pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub70->currentText()+".png");
    ui->sub70pic->setPixmap(picSub);
}
void MainWindow::on_spe70_currentIndexChanged()
{
    if (ui->spe70->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub70->currentText()+" Rush.png");
        ui->spe70pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe70->currentText()+".png");
        ui->spe70pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub71_currentIndexChanged()
{
    if (ui->spe71->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub71->currentText()+" Rush.png");
        ui->spe71pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub71->currentText()+".png");
    ui->sub71pic->setPixmap(picSub);
}
void MainWindow::on_spe71_currentIndexChanged()
{
    if (ui->spe71->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub71->currentText()+" Rush.png");
        ui->spe71pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe71->currentText()+".png");
        ui->spe71pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub72_currentIndexChanged()
{
    if (ui->spe72->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub72->currentText()+" Rush.png");
        ui->spe72pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub72->currentText()+".png");
    ui->sub72pic->setPixmap(picSub);
}
void MainWindow::on_spe72_currentIndexChanged()
{
    if (ui->spe72->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub72->currentText()+" Rush.png");
        ui->spe72pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe72->currentText()+".png");
        ui->spe72pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub73_currentIndexChanged()
{
    if (ui->spe73->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub73->currentText()+" Rush.png");
        ui->spe73pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub73->currentText()+".png");
    ui->sub73pic->setPixmap(picSub);
}
void MainWindow::on_spe73_currentIndexChanged()
{
    if (ui->spe73->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub73->currentText()+" Rush.png");
        ui->spe73pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe73->currentText()+".png");
        ui->spe73pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub74_currentIndexChanged()
{
    if (ui->spe74->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub74->currentText()+" Rush.png");
        ui->spe74pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub74->currentText()+".png");
    ui->sub74pic->setPixmap(picSub);
}
void MainWindow::on_spe74_currentIndexChanged()
{
    if (ui->spe74->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub74->currentText()+" Rush.png");
        ui->spe74pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe74->currentText()+".png");
        ui->spe74pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub75_currentIndexChanged()
{
    if (ui->spe75->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub75->currentText()+" Rush.png");
        ui->spe75pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub75->currentText()+".png");
    ui->sub75pic->setPixmap(picSub);
}
void MainWindow::on_spe75_currentIndexChanged()
{
    if (ui->spe75->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub75->currentText()+" Rush.png");
        ui->spe75pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe75->currentText()+".png");
        ui->spe75pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub76_currentIndexChanged()
{
    if (ui->spe76->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub76->currentText()+" Rush.png");
        ui->spe76pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub76->currentText()+".png");
    ui->sub76pic->setPixmap(picSub);
}
void MainWindow::on_spe76_currentIndexChanged()
{
    if (ui->spe76->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub76->currentText()+" Rush.png");
        ui->spe76pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe76->currentText()+".png");
        ui->spe76pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub77_currentIndexChanged()
{
    if (ui->spe77->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub77->currentText()+" Rush.png");
        ui->spe77pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub77->currentText()+".png");
    ui->sub77pic->setPixmap(picSub);
}
void MainWindow::on_spe77_currentIndexChanged()
{
    if (ui->spe77->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub77->currentText()+" Rush.png");
        ui->spe77pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe77->currentText()+".png");
        ui->spe77pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub78_currentIndexChanged()
{
    if (ui->spe78->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub78->currentText()+" Rush.png");
        ui->spe78pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub78->currentText()+".png");
    ui->sub78pic->setPixmap(picSub);
}
void MainWindow::on_spe78_currentIndexChanged()
{
    if (ui->spe78->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub78->currentText()+" Rush.png");
        ui->spe78pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe78->currentText()+".png");
        ui->spe78pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub79_currentIndexChanged()
{
    if (ui->spe79->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub79->currentText()+" Rush.png");
        ui->spe79pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub79->currentText()+".png");
    ui->sub79pic->setPixmap(picSub);
}
void MainWindow::on_spe79_currentIndexChanged()
{
    if (ui->spe79->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub79->currentText()+" Rush.png");
        ui->spe79pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe79->currentText()+".png");
        ui->spe79pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub80_currentIndexChanged()
{
    if (ui->spe80->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub80->currentText()+" Rush.png");
        ui->spe80pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub80->currentText()+".png");
    ui->sub80pic->setPixmap(picSub);
}
void MainWindow::on_spe80_currentIndexChanged()
{
    if (ui->spe80->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub80->currentText()+" Rush.png");
        ui->spe80pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe80->currentText()+".png");
        ui->spe80pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub81_currentIndexChanged()
{
    if (ui->spe81->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub81->currentText()+" Rush.png");
        ui->spe81pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub81->currentText()+".png");
    ui->sub81pic->setPixmap(picSub);
}
void MainWindow::on_spe81_currentIndexChanged()
{
    if (ui->spe81->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub81->currentText()+" Rush.png");
        ui->spe81pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe81->currentText()+".png");
        ui->spe81pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub82_currentIndexChanged()
{
    if (ui->spe82->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub82->currentText()+" Rush.png");
        ui->spe82pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub82->currentText()+".png");
    ui->sub82pic->setPixmap(picSub);
}
void MainWindow::on_spe82_currentIndexChanged()
{
    if (ui->spe82->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub82->currentText()+" Rush.png");
        ui->spe82pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe82->currentText()+".png");
        ui->spe82pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub83_currentIndexChanged()
{
    if (ui->spe83->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub83->currentText()+" Rush.png");
        ui->spe83pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub83->currentText()+".png");
    ui->sub83pic->setPixmap(picSub);
}
void MainWindow::on_spe83_currentIndexChanged()
{
    if (ui->spe83->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub83->currentText()+" Rush.png");
        ui->spe83pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe83->currentText()+".png");
        ui->spe83pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub84_currentIndexChanged()
{
    if (ui->spe84->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub84->currentText()+" Rush.png");
        ui->spe84pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub84->currentText()+".png");
    ui->sub84pic->setPixmap(picSub);
}
void MainWindow::on_spe84_currentIndexChanged()
{
    if (ui->spe84->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub84->currentText()+" Rush.png");
        ui->spe84pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe84->currentText()+".png");
        ui->spe84pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub85_currentIndexChanged()
{
    if (ui->spe85->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub85->currentText()+" Rush.png");
        ui->spe85pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub85->currentText()+".png");
    ui->sub85pic->setPixmap(picSub);
}
void MainWindow::on_spe85_currentIndexChanged()
{
    if (ui->spe85->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub85->currentText()+" Rush.png");
        ui->spe85pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe85->currentText()+".png");
        ui->spe85pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub86_currentIndexChanged()
{
    if (ui->spe86->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub86->currentText()+" Rush.png");
        ui->spe86pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub86->currentText()+".png");
    ui->sub86pic->setPixmap(picSub);
}
void MainWindow::on_spe86_currentIndexChanged()
{
    if (ui->spe86->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub86->currentText()+" Rush.png");
        ui->spe86pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe86->currentText()+".png");
        ui->spe86pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub87_currentIndexChanged()
{
    if (ui->spe87->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub87->currentText()+" Rush.png");
        ui->spe87pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub87->currentText()+".png");
    ui->sub87pic->setPixmap(picSub);
}
void MainWindow::on_spe87_currentIndexChanged()
{
    if (ui->spe87->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub87->currentText()+" Rush.png");
        ui->spe87pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe87->currentText()+".png");
        ui->spe87pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub88_currentIndexChanged()
{
    if (ui->spe88->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub88->currentText()+" Rush.png");
        ui->spe88pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub88->currentText()+".png");
    ui->sub88pic->setPixmap(picSub);
}
void MainWindow::on_spe88_currentIndexChanged()
{
    if (ui->spe88->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub88->currentText()+" Rush.png");
        ui->spe88pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe88->currentText()+".png");
        ui->spe88pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub89_currentIndexChanged()
{
    if (ui->spe89->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub89->currentText()+" Rush.png");
        ui->spe89pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub89->currentText()+".png");
    ui->sub89pic->setPixmap(picSub);
}
void MainWindow::on_spe89_currentIndexChanged()
{
    if (ui->spe89->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub89->currentText()+" Rush.png");
        ui->spe89pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe89->currentText()+".png");
        ui->spe89pic->setPixmap(picSpe);
    }
}

void MainWindow::on_sub90_currentIndexChanged()
{
    if (ui->spe90->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub90->currentText()+" Rush.png");
        ui->spe90pic->setPixmap(picSpe);
    }
    QPixmap picSub(":/new/images/timg/"+ui->sub90->currentText()+".png");
    ui->sub90pic->setPixmap(picSub);
}
void MainWindow::on_spe90_currentIndexChanged()
{
    if (ui->spe90->currentIndex()==0){
        QPixmap picSpe(":/new/images/timg/"+ui->sub90->currentText()+" Rush.png");
        ui->spe90pic->setPixmap(picSpe);
    }else{
        QPixmap picSpe(":/new/images/timg/"+ui->spe90->currentText()+".png");
        ui->spe90pic->setPixmap(picSpe);
    }
}

std::array<std::string,3> wepIndex(int sub,int spe,int dep) {
    std::array<std::string,3>  lines;
    switch (sub) {
    case 0:
        lines[0]="    Sub: Bomb_Throw";
        break;
    case 1:
        lines[0]="    Sub: Bomb_Hold";
        break;
    case 2:
        lines[0]="    Sub: Bomb_Handy";
        break;
    case 3:
        lines[0]="    Sub: Bomb_Chase";
        break;
    case 4:
        lines[0]="    Sub: TimerTrap";
        break;
    case 5:
        lines[0]="    Sub: DevilBall";
        break;
    case 6:
        lines[0]="    Sub: MarkingBall";
        break;
    case 7:
        lines[0]="    Sub: Shield";
        break;
    case 8:
        lines[0]="    Sub: Sprinkler";
        break;
    case 9:
        lines[0]="    Sub: Flag";
        break;
    }
    switch (spe) {
    case 0:
        lines[1]="    Special: FreeBombs";
        break;
    case 1:
        lines[1]="    Special: AllMarking";
        break;
    case 2:
        lines[1]="    Special: Barrier";
        break;
    case 3:
        lines[1]="    Special: Tornado";
        break;
    case 4:
        lines[1]="    Special: SuperShot";
        break;
    case 5:
        lines[1]="    Special: BigLaser";
        break;
    case 6:
        lines[1]="    Special: KingSquid";
        break;
    case 7:
        lines[1]="    Special: Shachihoko";
        break;
    }
    switch (dep) {
    case 0:
        lines[2]="    SpecialDownRate: !l 60";
        break;
    case 1:
        lines[2]="    SpecialDownRate: !l 40";
        break;
    case 2:
        lines[2]="    SpecialDownRate: !l 25";
        break;
    }

    return lines;
}




void MainWindow::on_btnGenerate_clicked()
{
    ui->plainTextEdit->clear();
    ui->tabWeapons->setCurrentIndex(8);
    std::vector<std::string> lines;
    QFile file(":/Template.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // Handle error: file could not be opened
        qWarning("Could not open file for reading: %s", qPrintable(":/Template.txt"));

    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        lines.push_back(line.toStdString()); // Convert QString to std::string
    }

    file.close();




    lines[24]=wepIndex(ui->sub0->currentIndex(),ui->spe0->currentIndex(),ui->dep0->currentIndex())[0];
    lines[22]=wepIndex(ui->sub0->currentIndex(),ui->spe0->currentIndex(),ui->dep0->currentIndex())[1];
    lines[23]=wepIndex(ui->sub0->currentIndex(),ui->spe0->currentIndex(),ui->dep0->currentIndex())[2];
    lines[44]=wepIndex(ui->sub1->currentIndex(),ui->spe1->currentIndex(),ui->dep1->currentIndex())[0];
    lines[42]=wepIndex(ui->sub1->currentIndex(),ui->spe1->currentIndex(),ui->dep1->currentIndex())[1];
    lines[43]=wepIndex(ui->sub1->currentIndex(),ui->spe1->currentIndex(),ui->dep1->currentIndex())[2];
    lines[64]=wepIndex(ui->sub2->currentIndex(),ui->spe2->currentIndex(),ui->dep2->currentIndex())[0];
    lines[62]=wepIndex(ui->sub2->currentIndex(),ui->spe2->currentIndex(),ui->dep2->currentIndex())[1];
    lines[63]=wepIndex(ui->sub2->currentIndex(),ui->spe2->currentIndex(),ui->dep2->currentIndex())[2];
    lines[84]=wepIndex(ui->sub3->currentIndex(),ui->spe3->currentIndex(),ui->dep3->currentIndex())[0];
    lines[82]=wepIndex(ui->sub3->currentIndex(),ui->spe3->currentIndex(),ui->dep3->currentIndex())[1];
    lines[83]=wepIndex(ui->sub3->currentIndex(),ui->spe3->currentIndex(),ui->dep3->currentIndex())[2];
    lines[104]=wepIndex(ui->sub4->currentIndex(),ui->spe4->currentIndex(),ui->dep4->currentIndex())[0];
    lines[102]=wepIndex(ui->sub4->currentIndex(),ui->spe4->currentIndex(),ui->dep4->currentIndex())[1];
    lines[103]=wepIndex(ui->sub4->currentIndex(),ui->spe4->currentIndex(),ui->dep4->currentIndex())[2];
    lines[124]=wepIndex(ui->sub5->currentIndex(),ui->spe5->currentIndex(),ui->dep5->currentIndex())[0];
    lines[122]=wepIndex(ui->sub5->currentIndex(),ui->spe5->currentIndex(),ui->dep5->currentIndex())[1];
    lines[123]=wepIndex(ui->sub5->currentIndex(),ui->spe5->currentIndex(),ui->dep5->currentIndex())[2];
    lines[144]=wepIndex(ui->sub6->currentIndex(),ui->spe6->currentIndex(),ui->dep6->currentIndex())[0];
    lines[142]=wepIndex(ui->sub6->currentIndex(),ui->spe6->currentIndex(),ui->dep6->currentIndex())[1];
    lines[143]=wepIndex(ui->sub6->currentIndex(),ui->spe6->currentIndex(),ui->dep6->currentIndex())[2];
    lines[164]=wepIndex(ui->sub7->currentIndex(),ui->spe7->currentIndex(),ui->dep7->currentIndex())[0];
    lines[162]=wepIndex(ui->sub7->currentIndex(),ui->spe7->currentIndex(),ui->dep7->currentIndex())[1];
    lines[163]=wepIndex(ui->sub7->currentIndex(),ui->spe7->currentIndex(),ui->dep7->currentIndex())[2];
    lines[184]=wepIndex(ui->sub8->currentIndex(),ui->spe8->currentIndex(),ui->dep8->currentIndex())[0];
    lines[182]=wepIndex(ui->sub8->currentIndex(),ui->spe8->currentIndex(),ui->dep8->currentIndex())[1];
    lines[183]=wepIndex(ui->sub8->currentIndex(),ui->spe8->currentIndex(),ui->dep8->currentIndex())[2];
    lines[204]=wepIndex(ui->sub9->currentIndex(),ui->spe9->currentIndex(),ui->dep9->currentIndex())[0];
    lines[202]=wepIndex(ui->sub9->currentIndex(),ui->spe9->currentIndex(),ui->dep9->currentIndex())[1];
    lines[203]=wepIndex(ui->sub9->currentIndex(),ui->spe9->currentIndex(),ui->dep9->currentIndex())[2];
    lines[224]=wepIndex(ui->sub10->currentIndex(),ui->spe10->currentIndex(),ui->dep10->currentIndex())[0];
    lines[222]=wepIndex(ui->sub10->currentIndex(),ui->spe10->currentIndex(),ui->dep10->currentIndex())[1];
    lines[223]=wepIndex(ui->sub10->currentIndex(),ui->spe10->currentIndex(),ui->dep10->currentIndex())[2];
    lines[244]=wepIndex(ui->sub11->currentIndex(),ui->spe11->currentIndex(),ui->dep11->currentIndex())[0];
    lines[242]=wepIndex(ui->sub11->currentIndex(),ui->spe11->currentIndex(),ui->dep11->currentIndex())[1];
    lines[243]=wepIndex(ui->sub11->currentIndex(),ui->spe11->currentIndex(),ui->dep11->currentIndex())[2];
    lines[264]=wepIndex(ui->sub12->currentIndex(),ui->spe12->currentIndex(),ui->dep12->currentIndex())[0];
    lines[262]=wepIndex(ui->sub12->currentIndex(),ui->spe12->currentIndex(),ui->dep12->currentIndex())[1];
    lines[263]=wepIndex(ui->sub12->currentIndex(),ui->spe12->currentIndex(),ui->dep12->currentIndex())[2];
    lines[284]=wepIndex(ui->sub13->currentIndex(),ui->spe13->currentIndex(),ui->dep13->currentIndex())[0];
    lines[282]=wepIndex(ui->sub13->currentIndex(),ui->spe13->currentIndex(),ui->dep13->currentIndex())[1];
    lines[283]=wepIndex(ui->sub13->currentIndex(),ui->spe13->currentIndex(),ui->dep13->currentIndex())[2];
    lines[304]=wepIndex(ui->sub14->currentIndex(),ui->spe14->currentIndex(),ui->dep14->currentIndex())[0];
    lines[302]=wepIndex(ui->sub14->currentIndex(),ui->spe14->currentIndex(),ui->dep14->currentIndex())[1];
    lines[303]=wepIndex(ui->sub14->currentIndex(),ui->spe14->currentIndex(),ui->dep14->currentIndex())[2];
    lines[324]=wepIndex(ui->sub15->currentIndex(),ui->spe15->currentIndex(),ui->dep15->currentIndex())[0];
    lines[322]=wepIndex(ui->sub15->currentIndex(),ui->spe15->currentIndex(),ui->dep15->currentIndex())[1];
    lines[323]=wepIndex(ui->sub15->currentIndex(),ui->spe15->currentIndex(),ui->dep15->currentIndex())[2];
    lines[344]=wepIndex(ui->sub16->currentIndex(),ui->spe16->currentIndex(),ui->dep16->currentIndex())[0];
    lines[342]=wepIndex(ui->sub16->currentIndex(),ui->spe16->currentIndex(),ui->dep16->currentIndex())[1];
    lines[343]=wepIndex(ui->sub16->currentIndex(),ui->spe16->currentIndex(),ui->dep16->currentIndex())[2];
    lines[364]=wepIndex(ui->sub17->currentIndex(),ui->spe17->currentIndex(),ui->dep17->currentIndex())[0];
    lines[362]=wepIndex(ui->sub17->currentIndex(),ui->spe17->currentIndex(),ui->dep17->currentIndex())[1];
    lines[363]=wepIndex(ui->sub17->currentIndex(),ui->spe17->currentIndex(),ui->dep17->currentIndex())[2];
    lines[384]=wepIndex(ui->sub18->currentIndex(),ui->spe18->currentIndex(),ui->dep18->currentIndex())[0];
    lines[382]=wepIndex(ui->sub18->currentIndex(),ui->spe18->currentIndex(),ui->dep18->currentIndex())[1];
    lines[383]=wepIndex(ui->sub18->currentIndex(),ui->spe18->currentIndex(),ui->dep18->currentIndex())[2];
    lines[404]=wepIndex(ui->sub19->currentIndex(),ui->spe19->currentIndex(),ui->dep19->currentIndex())[0];
    lines[402]=wepIndex(ui->sub19->currentIndex(),ui->spe19->currentIndex(),ui->dep19->currentIndex())[1];
    lines[403]=wepIndex(ui->sub19->currentIndex(),ui->spe19->currentIndex(),ui->dep19->currentIndex())[2];
    lines[424]=wepIndex(ui->sub20->currentIndex(),ui->spe20->currentIndex(),ui->dep20->currentIndex())[0];
    lines[422]=wepIndex(ui->sub20->currentIndex(),ui->spe20->currentIndex(),ui->dep20->currentIndex())[1];
    lines[423]=wepIndex(ui->sub20->currentIndex(),ui->spe20->currentIndex(),ui->dep20->currentIndex())[2];
    lines[444]=wepIndex(ui->sub21->currentIndex(),ui->spe21->currentIndex(),ui->dep21->currentIndex())[0];
    lines[442]=wepIndex(ui->sub21->currentIndex(),ui->spe21->currentIndex(),ui->dep21->currentIndex())[1];
    lines[443]=wepIndex(ui->sub21->currentIndex(),ui->spe21->currentIndex(),ui->dep21->currentIndex())[2];
    lines[464]=wepIndex(ui->sub22->currentIndex(),ui->spe22->currentIndex(),ui->dep22->currentIndex())[0];
    lines[462]=wepIndex(ui->sub22->currentIndex(),ui->spe22->currentIndex(),ui->dep22->currentIndex())[1];
    lines[463]=wepIndex(ui->sub22->currentIndex(),ui->spe22->currentIndex(),ui->dep22->currentIndex())[2];
    lines[484]=wepIndex(ui->sub23->currentIndex(),ui->spe23->currentIndex(),ui->dep23->currentIndex())[0];
    lines[482]=wepIndex(ui->sub23->currentIndex(),ui->spe23->currentIndex(),ui->dep23->currentIndex())[1];
    lines[483]=wepIndex(ui->sub23->currentIndex(),ui->spe23->currentIndex(),ui->dep23->currentIndex())[2];
    lines[504]=wepIndex(ui->sub24->currentIndex(),ui->spe24->currentIndex(),ui->dep24->currentIndex())[0];
    lines[502]=wepIndex(ui->sub24->currentIndex(),ui->spe24->currentIndex(),ui->dep24->currentIndex())[1];
    lines[503]=wepIndex(ui->sub24->currentIndex(),ui->spe24->currentIndex(),ui->dep24->currentIndex())[2];
    lines[524]=wepIndex(ui->sub25->currentIndex(),ui->spe25->currentIndex(),ui->dep25->currentIndex())[0];
    lines[522]=wepIndex(ui->sub25->currentIndex(),ui->spe25->currentIndex(),ui->dep25->currentIndex())[1];
    lines[523]=wepIndex(ui->sub25->currentIndex(),ui->spe25->currentIndex(),ui->dep25->currentIndex())[2];
    lines[544]=wepIndex(ui->sub26->currentIndex(),ui->spe26->currentIndex(),ui->dep26->currentIndex())[0];
    lines[542]=wepIndex(ui->sub26->currentIndex(),ui->spe26->currentIndex(),ui->dep26->currentIndex())[1];
    lines[543]=wepIndex(ui->sub26->currentIndex(),ui->spe26->currentIndex(),ui->dep26->currentIndex())[2];
    lines[564]=wepIndex(ui->sub27->currentIndex(),ui->spe27->currentIndex(),ui->dep27->currentIndex())[0];
    lines[562]=wepIndex(ui->sub27->currentIndex(),ui->spe27->currentIndex(),ui->dep27->currentIndex())[1];
    lines[563]=wepIndex(ui->sub27->currentIndex(),ui->spe27->currentIndex(),ui->dep27->currentIndex())[2];
    lines[584]=wepIndex(ui->sub28->currentIndex(),ui->spe28->currentIndex(),ui->dep28->currentIndex())[0];
    lines[582]=wepIndex(ui->sub28->currentIndex(),ui->spe28->currentIndex(),ui->dep28->currentIndex())[1];
    lines[583]=wepIndex(ui->sub28->currentIndex(),ui->spe28->currentIndex(),ui->dep28->currentIndex())[2];
    lines[604]=wepIndex(ui->sub29->currentIndex(),ui->spe29->currentIndex(),ui->dep29->currentIndex())[0];
    lines[602]=wepIndex(ui->sub29->currentIndex(),ui->spe29->currentIndex(),ui->dep29->currentIndex())[1];
    lines[603]=wepIndex(ui->sub29->currentIndex(),ui->spe29->currentIndex(),ui->dep29->currentIndex())[2];
    lines[624]=wepIndex(ui->sub30->currentIndex(),ui->spe30->currentIndex(),ui->dep30->currentIndex())[0];
    lines[622]=wepIndex(ui->sub30->currentIndex(),ui->spe30->currentIndex(),ui->dep30->currentIndex())[1];
    lines[623]=wepIndex(ui->sub30->currentIndex(),ui->spe30->currentIndex(),ui->dep30->currentIndex())[2];
    lines[644]=wepIndex(ui->sub31->currentIndex(),ui->spe31->currentIndex(),ui->dep31->currentIndex())[0];
    lines[642]=wepIndex(ui->sub31->currentIndex(),ui->spe31->currentIndex(),ui->dep31->currentIndex())[1];
    lines[643]=wepIndex(ui->sub31->currentIndex(),ui->spe31->currentIndex(),ui->dep31->currentIndex())[2];
    lines[664]=wepIndex(ui->sub32->currentIndex(),ui->spe32->currentIndex(),ui->dep32->currentIndex())[0];
    lines[662]=wepIndex(ui->sub32->currentIndex(),ui->spe32->currentIndex(),ui->dep32->currentIndex())[1];
    lines[663]=wepIndex(ui->sub32->currentIndex(),ui->spe32->currentIndex(),ui->dep32->currentIndex())[2];
    lines[684]=wepIndex(ui->sub33->currentIndex(),ui->spe33->currentIndex(),ui->dep33->currentIndex())[0];
    lines[682]=wepIndex(ui->sub33->currentIndex(),ui->spe33->currentIndex(),ui->dep33->currentIndex())[1];
    lines[683]=wepIndex(ui->sub33->currentIndex(),ui->spe33->currentIndex(),ui->dep33->currentIndex())[2];
    lines[704]=wepIndex(ui->sub34->currentIndex(),ui->spe34->currentIndex(),ui->dep34->currentIndex())[0];
    lines[702]=wepIndex(ui->sub34->currentIndex(),ui->spe34->currentIndex(),ui->dep34->currentIndex())[1];
    lines[703]=wepIndex(ui->sub34->currentIndex(),ui->spe34->currentIndex(),ui->dep34->currentIndex())[2];
    lines[724]=wepIndex(ui->sub35->currentIndex(),ui->spe35->currentIndex(),ui->dep35->currentIndex())[0];
    lines[722]=wepIndex(ui->sub35->currentIndex(),ui->spe35->currentIndex(),ui->dep35->currentIndex())[1];
    lines[723]=wepIndex(ui->sub35->currentIndex(),ui->spe35->currentIndex(),ui->dep35->currentIndex())[2];
    lines[744]=wepIndex(ui->sub36->currentIndex(),ui->spe36->currentIndex(),ui->dep36->currentIndex())[0];
    lines[742]=wepIndex(ui->sub36->currentIndex(),ui->spe36->currentIndex(),ui->dep36->currentIndex())[1];
    lines[743]=wepIndex(ui->sub36->currentIndex(),ui->spe36->currentIndex(),ui->dep36->currentIndex())[2];
    lines[764]=wepIndex(ui->sub37->currentIndex(),ui->spe37->currentIndex(),ui->dep37->currentIndex())[0];
    lines[762]=wepIndex(ui->sub37->currentIndex(),ui->spe37->currentIndex(),ui->dep37->currentIndex())[1];
    lines[763]=wepIndex(ui->sub37->currentIndex(),ui->spe37->currentIndex(),ui->dep37->currentIndex())[2];
    lines[784]=wepIndex(ui->sub38->currentIndex(),ui->spe38->currentIndex(),ui->dep38->currentIndex())[0];
    lines[782]=wepIndex(ui->sub38->currentIndex(),ui->spe38->currentIndex(),ui->dep38->currentIndex())[1];
    lines[783]=wepIndex(ui->sub38->currentIndex(),ui->spe38->currentIndex(),ui->dep38->currentIndex())[2];
    lines[804]=wepIndex(ui->sub39->currentIndex(),ui->spe39->currentIndex(),ui->dep39->currentIndex())[0];
    lines[802]=wepIndex(ui->sub39->currentIndex(),ui->spe39->currentIndex(),ui->dep39->currentIndex())[1];
    lines[803]=wepIndex(ui->sub39->currentIndex(),ui->spe39->currentIndex(),ui->dep39->currentIndex())[2];
    lines[824]=wepIndex(ui->sub40->currentIndex(),ui->spe40->currentIndex(),ui->dep40->currentIndex())[0];
    lines[822]=wepIndex(ui->sub40->currentIndex(),ui->spe40->currentIndex(),ui->dep40->currentIndex())[1];
    lines[823]=wepIndex(ui->sub40->currentIndex(),ui->spe40->currentIndex(),ui->dep40->currentIndex())[2];
    lines[844]=wepIndex(ui->sub41->currentIndex(),ui->spe41->currentIndex(),ui->dep41->currentIndex())[0];
    lines[842]=wepIndex(ui->sub41->currentIndex(),ui->spe41->currentIndex(),ui->dep41->currentIndex())[1];
    lines[843]=wepIndex(ui->sub41->currentIndex(),ui->spe41->currentIndex(),ui->dep41->currentIndex())[2];
    lines[864]=wepIndex(ui->sub42->currentIndex(),ui->spe42->currentIndex(),ui->dep42->currentIndex())[0];
    lines[862]=wepIndex(ui->sub42->currentIndex(),ui->spe42->currentIndex(),ui->dep42->currentIndex())[1];
    lines[863]=wepIndex(ui->sub42->currentIndex(),ui->spe42->currentIndex(),ui->dep42->currentIndex())[2];
    lines[884]=wepIndex(ui->sub43->currentIndex(),ui->spe43->currentIndex(),ui->dep43->currentIndex())[0];
    lines[882]=wepIndex(ui->sub43->currentIndex(),ui->spe43->currentIndex(),ui->dep43->currentIndex())[1];
    lines[883]=wepIndex(ui->sub43->currentIndex(),ui->spe43->currentIndex(),ui->dep43->currentIndex())[2];
    lines[904]=wepIndex(ui->sub44->currentIndex(),ui->spe44->currentIndex(),ui->dep44->currentIndex())[0];
    lines[902]=wepIndex(ui->sub44->currentIndex(),ui->spe44->currentIndex(),ui->dep44->currentIndex())[1];
    lines[903]=wepIndex(ui->sub44->currentIndex(),ui->spe44->currentIndex(),ui->dep44->currentIndex())[2];
    lines[924]=wepIndex(ui->sub45->currentIndex(),ui->spe45->currentIndex(),ui->dep45->currentIndex())[0];
    lines[922]=wepIndex(ui->sub45->currentIndex(),ui->spe45->currentIndex(),ui->dep45->currentIndex())[1];
    lines[923]=wepIndex(ui->sub45->currentIndex(),ui->spe45->currentIndex(),ui->dep45->currentIndex())[2];
    lines[944]=wepIndex(ui->sub46->currentIndex(),ui->spe46->currentIndex(),ui->dep46->currentIndex())[0];
    lines[942]=wepIndex(ui->sub46->currentIndex(),ui->spe46->currentIndex(),ui->dep46->currentIndex())[1];
    lines[943]=wepIndex(ui->sub46->currentIndex(),ui->spe46->currentIndex(),ui->dep46->currentIndex())[2];
    lines[964]=wepIndex(ui->sub47->currentIndex(),ui->spe47->currentIndex(),ui->dep47->currentIndex())[0];
    lines[962]=wepIndex(ui->sub47->currentIndex(),ui->spe47->currentIndex(),ui->dep47->currentIndex())[1];
    lines[963]=wepIndex(ui->sub47->currentIndex(),ui->spe47->currentIndex(),ui->dep47->currentIndex())[2];
    lines[984]=wepIndex(ui->sub48->currentIndex(),ui->spe48->currentIndex(),ui->dep48->currentIndex())[0];
    lines[982]=wepIndex(ui->sub48->currentIndex(),ui->spe48->currentIndex(),ui->dep48->currentIndex())[1];
    lines[983]=wepIndex(ui->sub48->currentIndex(),ui->spe48->currentIndex(),ui->dep48->currentIndex())[2];
    lines[1004]=wepIndex(ui->sub49->currentIndex(),ui->spe49->currentIndex(),ui->dep49->currentIndex())[0];
    lines[1002]=wepIndex(ui->sub49->currentIndex(),ui->spe49->currentIndex(),ui->dep49->currentIndex())[1];
    lines[1003]=wepIndex(ui->sub49->currentIndex(),ui->spe49->currentIndex(),ui->dep49->currentIndex())[2];
    lines[1024]=wepIndex(ui->sub50->currentIndex(),ui->spe50->currentIndex(),ui->dep50->currentIndex())[0];
    lines[1022]=wepIndex(ui->sub50->currentIndex(),ui->spe50->currentIndex(),ui->dep50->currentIndex())[1];
    lines[1023]=wepIndex(ui->sub50->currentIndex(),ui->spe50->currentIndex(),ui->dep50->currentIndex())[2];
    lines[1044]=wepIndex(ui->sub51->currentIndex(),ui->spe51->currentIndex(),ui->dep51->currentIndex())[0];
    lines[1042]=wepIndex(ui->sub51->currentIndex(),ui->spe51->currentIndex(),ui->dep51->currentIndex())[1];
    lines[1043]=wepIndex(ui->sub51->currentIndex(),ui->spe51->currentIndex(),ui->dep51->currentIndex())[2];
    lines[1064]=wepIndex(ui->sub52->currentIndex(),ui->spe52->currentIndex(),ui->dep52->currentIndex())[0];
    lines[1062]=wepIndex(ui->sub52->currentIndex(),ui->spe52->currentIndex(),ui->dep52->currentIndex())[1];
    lines[1063]=wepIndex(ui->sub52->currentIndex(),ui->spe52->currentIndex(),ui->dep52->currentIndex())[2];
    lines[1084]=wepIndex(ui->sub53->currentIndex(),ui->spe53->currentIndex(),ui->dep53->currentIndex())[0];
    lines[1082]=wepIndex(ui->sub53->currentIndex(),ui->spe53->currentIndex(),ui->dep53->currentIndex())[1];
    lines[1083]=wepIndex(ui->sub53->currentIndex(),ui->spe53->currentIndex(),ui->dep53->currentIndex())[2];
    lines[1104]=wepIndex(ui->sub54->currentIndex(),ui->spe54->currentIndex(),ui->dep54->currentIndex())[0];
    lines[1102]=wepIndex(ui->sub54->currentIndex(),ui->spe54->currentIndex(),ui->dep54->currentIndex())[1];
    lines[1103]=wepIndex(ui->sub54->currentIndex(),ui->spe54->currentIndex(),ui->dep54->currentIndex())[2];
    lines[1124]=wepIndex(ui->sub55->currentIndex(),ui->spe55->currentIndex(),ui->dep55->currentIndex())[0];
    lines[1122]=wepIndex(ui->sub55->currentIndex(),ui->spe55->currentIndex(),ui->dep55->currentIndex())[1];
    lines[1123]=wepIndex(ui->sub55->currentIndex(),ui->spe55->currentIndex(),ui->dep55->currentIndex())[2];
    lines[1144]=wepIndex(ui->sub56->currentIndex(),ui->spe56->currentIndex(),ui->dep56->currentIndex())[0];
    lines[1142]=wepIndex(ui->sub56->currentIndex(),ui->spe56->currentIndex(),ui->dep56->currentIndex())[1];
    lines[1143]=wepIndex(ui->sub56->currentIndex(),ui->spe56->currentIndex(),ui->dep56->currentIndex())[2];
    lines[1164]=wepIndex(ui->sub57->currentIndex(),ui->spe57->currentIndex(),ui->dep57->currentIndex())[0];
    lines[1162]=wepIndex(ui->sub57->currentIndex(),ui->spe57->currentIndex(),ui->dep57->currentIndex())[1];
    lines[1163]=wepIndex(ui->sub57->currentIndex(),ui->spe57->currentIndex(),ui->dep57->currentIndex())[2];
    lines[1184]=wepIndex(ui->sub58->currentIndex(),ui->spe58->currentIndex(),ui->dep58->currentIndex())[0];
    lines[1182]=wepIndex(ui->sub58->currentIndex(),ui->spe58->currentIndex(),ui->dep58->currentIndex())[1];
    lines[1183]=wepIndex(ui->sub58->currentIndex(),ui->spe58->currentIndex(),ui->dep58->currentIndex())[2];
    lines[1204]=wepIndex(ui->sub59->currentIndex(),ui->spe59->currentIndex(),ui->dep59->currentIndex())[0];
    lines[1202]=wepIndex(ui->sub59->currentIndex(),ui->spe59->currentIndex(),ui->dep59->currentIndex())[1];
    lines[1203]=wepIndex(ui->sub59->currentIndex(),ui->spe59->currentIndex(),ui->dep59->currentIndex())[2];
    lines[1224]=wepIndex(ui->sub60->currentIndex(),ui->spe60->currentIndex(),ui->dep60->currentIndex())[0];
    lines[1222]=wepIndex(ui->sub60->currentIndex(),ui->spe60->currentIndex(),ui->dep60->currentIndex())[1];
    lines[1223]=wepIndex(ui->sub60->currentIndex(),ui->spe60->currentIndex(),ui->dep60->currentIndex())[2];
    lines[1244]=wepIndex(ui->sub61->currentIndex(),ui->spe61->currentIndex(),ui->dep61->currentIndex())[0];
    lines[1242]=wepIndex(ui->sub61->currentIndex(),ui->spe61->currentIndex(),ui->dep61->currentIndex())[1];
    lines[1243]=wepIndex(ui->sub61->currentIndex(),ui->spe61->currentIndex(),ui->dep61->currentIndex())[2];
    lines[1264]=wepIndex(ui->sub62->currentIndex(),ui->spe62->currentIndex(),ui->dep62->currentIndex())[0];
    lines[1262]=wepIndex(ui->sub62->currentIndex(),ui->spe62->currentIndex(),ui->dep62->currentIndex())[1];
    lines[1263]=wepIndex(ui->sub62->currentIndex(),ui->spe62->currentIndex(),ui->dep62->currentIndex())[2];
    lines[1284]=wepIndex(ui->sub63->currentIndex(),ui->spe63->currentIndex(),ui->dep63->currentIndex())[0];
    lines[1282]=wepIndex(ui->sub63->currentIndex(),ui->spe63->currentIndex(),ui->dep63->currentIndex())[1];
    lines[1283]=wepIndex(ui->sub63->currentIndex(),ui->spe63->currentIndex(),ui->dep63->currentIndex())[2];
    lines[1304]=wepIndex(ui->sub64->currentIndex(),ui->spe64->currentIndex(),ui->dep64->currentIndex())[0];
    lines[1302]=wepIndex(ui->sub64->currentIndex(),ui->spe64->currentIndex(),ui->dep64->currentIndex())[1];
    lines[1303]=wepIndex(ui->sub64->currentIndex(),ui->spe64->currentIndex(),ui->dep64->currentIndex())[2];
    lines[1324]=wepIndex(ui->sub65->currentIndex(),ui->spe65->currentIndex(),ui->dep65->currentIndex())[0];
    lines[1322]=wepIndex(ui->sub65->currentIndex(),ui->spe65->currentIndex(),ui->dep65->currentIndex())[1];
    lines[1323]=wepIndex(ui->sub65->currentIndex(),ui->spe65->currentIndex(),ui->dep65->currentIndex())[2];
    lines[1344]=wepIndex(ui->sub66->currentIndex(),ui->spe66->currentIndex(),ui->dep66->currentIndex())[0];
    lines[1342]=wepIndex(ui->sub66->currentIndex(),ui->spe66->currentIndex(),ui->dep66->currentIndex())[1];
    lines[1343]=wepIndex(ui->sub66->currentIndex(),ui->spe66->currentIndex(),ui->dep66->currentIndex())[2];
    lines[1364]=wepIndex(ui->sub67->currentIndex(),ui->spe67->currentIndex(),ui->dep67->currentIndex())[0];
    lines[1362]=wepIndex(ui->sub67->currentIndex(),ui->spe67->currentIndex(),ui->dep67->currentIndex())[1];
    lines[1363]=wepIndex(ui->sub67->currentIndex(),ui->spe67->currentIndex(),ui->dep67->currentIndex())[2];
    lines[1384]=wepIndex(ui->sub68->currentIndex(),ui->spe68->currentIndex(),ui->dep68->currentIndex())[0];
    lines[1382]=wepIndex(ui->sub68->currentIndex(),ui->spe68->currentIndex(),ui->dep68->currentIndex())[1];
    lines[1383]=wepIndex(ui->sub68->currentIndex(),ui->spe68->currentIndex(),ui->dep68->currentIndex())[2];
    lines[1404]=wepIndex(ui->sub69->currentIndex(),ui->spe69->currentIndex(),ui->dep69->currentIndex())[0];
    lines[1402]=wepIndex(ui->sub69->currentIndex(),ui->spe69->currentIndex(),ui->dep69->currentIndex())[1];
    lines[1403]=wepIndex(ui->sub69->currentIndex(),ui->spe69->currentIndex(),ui->dep69->currentIndex())[2];
    lines[1424]=wepIndex(ui->sub70->currentIndex(),ui->spe70->currentIndex(),ui->dep70->currentIndex())[0];
    lines[1422]=wepIndex(ui->sub70->currentIndex(),ui->spe70->currentIndex(),ui->dep70->currentIndex())[1];
    lines[1423]=wepIndex(ui->sub70->currentIndex(),ui->spe70->currentIndex(),ui->dep70->currentIndex())[2];
    lines[1444]=wepIndex(ui->sub71->currentIndex(),ui->spe71->currentIndex(),ui->dep71->currentIndex())[0];
    lines[1442]=wepIndex(ui->sub71->currentIndex(),ui->spe71->currentIndex(),ui->dep71->currentIndex())[1];
    lines[1443]=wepIndex(ui->sub71->currentIndex(),ui->spe71->currentIndex(),ui->dep71->currentIndex())[2];
    lines[1464]=wepIndex(ui->sub72->currentIndex(),ui->spe72->currentIndex(),ui->dep72->currentIndex())[0];
    lines[1462]=wepIndex(ui->sub72->currentIndex(),ui->spe72->currentIndex(),ui->dep72->currentIndex())[1];
    lines[1463]=wepIndex(ui->sub72->currentIndex(),ui->spe72->currentIndex(),ui->dep72->currentIndex())[2];
    lines[1484]=wepIndex(ui->sub73->currentIndex(),ui->spe73->currentIndex(),ui->dep73->currentIndex())[0];
    lines[1482]=wepIndex(ui->sub73->currentIndex(),ui->spe73->currentIndex(),ui->dep73->currentIndex())[1];
    lines[1483]=wepIndex(ui->sub73->currentIndex(),ui->spe73->currentIndex(),ui->dep73->currentIndex())[2];
    lines[1504]=wepIndex(ui->sub74->currentIndex(),ui->spe74->currentIndex(),ui->dep74->currentIndex())[0];
    lines[1502]=wepIndex(ui->sub74->currentIndex(),ui->spe74->currentIndex(),ui->dep74->currentIndex())[1];
    lines[1503]=wepIndex(ui->sub74->currentIndex(),ui->spe74->currentIndex(),ui->dep74->currentIndex())[2];
    lines[1524]=wepIndex(ui->sub75->currentIndex(),ui->spe75->currentIndex(),ui->dep75->currentIndex())[0];
    lines[1522]=wepIndex(ui->sub75->currentIndex(),ui->spe75->currentIndex(),ui->dep75->currentIndex())[1];
    lines[1523]=wepIndex(ui->sub75->currentIndex(),ui->spe75->currentIndex(),ui->dep75->currentIndex())[2];
    lines[1544]=wepIndex(ui->sub76->currentIndex(),ui->spe76->currentIndex(),ui->dep76->currentIndex())[0];
    lines[1542]=wepIndex(ui->sub76->currentIndex(),ui->spe76->currentIndex(),ui->dep76->currentIndex())[1];
    lines[1543]=wepIndex(ui->sub76->currentIndex(),ui->spe76->currentIndex(),ui->dep76->currentIndex())[2];
    lines[1564]=wepIndex(ui->sub77->currentIndex(),ui->spe77->currentIndex(),ui->dep77->currentIndex())[0];
    lines[1562]=wepIndex(ui->sub77->currentIndex(),ui->spe77->currentIndex(),ui->dep77->currentIndex())[1];
    lines[1563]=wepIndex(ui->sub77->currentIndex(),ui->spe77->currentIndex(),ui->dep77->currentIndex())[2];
    lines[1584]=wepIndex(ui->sub78->currentIndex(),ui->spe78->currentIndex(),ui->dep78->currentIndex())[0];
    lines[1582]=wepIndex(ui->sub78->currentIndex(),ui->spe78->currentIndex(),ui->dep78->currentIndex())[1];
    lines[1583]=wepIndex(ui->sub78->currentIndex(),ui->spe78->currentIndex(),ui->dep78->currentIndex())[2];
    lines[1604]=wepIndex(ui->sub79->currentIndex(),ui->spe79->currentIndex(),ui->dep79->currentIndex())[0];
    lines[1602]=wepIndex(ui->sub79->currentIndex(),ui->spe79->currentIndex(),ui->dep79->currentIndex())[1];
    lines[1603]=wepIndex(ui->sub79->currentIndex(),ui->spe79->currentIndex(),ui->dep79->currentIndex())[2];
    lines[1624]=wepIndex(ui->sub80->currentIndex(),ui->spe80->currentIndex(),ui->dep80->currentIndex())[0];
    lines[1622]=wepIndex(ui->sub80->currentIndex(),ui->spe80->currentIndex(),ui->dep80->currentIndex())[1];
    lines[1623]=wepIndex(ui->sub80->currentIndex(),ui->spe80->currentIndex(),ui->dep80->currentIndex())[2];
    lines[1644]=wepIndex(ui->sub81->currentIndex(),ui->spe81->currentIndex(),ui->dep81->currentIndex())[0];
    lines[1642]=wepIndex(ui->sub81->currentIndex(),ui->spe81->currentIndex(),ui->dep81->currentIndex())[1];
    lines[1643]=wepIndex(ui->sub81->currentIndex(),ui->spe81->currentIndex(),ui->dep81->currentIndex())[2];
    lines[1664]=wepIndex(ui->sub82->currentIndex(),ui->spe82->currentIndex(),ui->dep82->currentIndex())[0];
    lines[1662]=wepIndex(ui->sub82->currentIndex(),ui->spe82->currentIndex(),ui->dep82->currentIndex())[1];
    lines[1663]=wepIndex(ui->sub82->currentIndex(),ui->spe82->currentIndex(),ui->dep82->currentIndex())[2];
    lines[1684]=wepIndex(ui->sub83->currentIndex(),ui->spe83->currentIndex(),ui->dep83->currentIndex())[0];
    lines[1682]=wepIndex(ui->sub83->currentIndex(),ui->spe83->currentIndex(),ui->dep83->currentIndex())[1];
    lines[1683]=wepIndex(ui->sub83->currentIndex(),ui->spe83->currentIndex(),ui->dep83->currentIndex())[2];
    lines[1704]=wepIndex(ui->sub84->currentIndex(),ui->spe84->currentIndex(),ui->dep84->currentIndex())[0];
    lines[1702]=wepIndex(ui->sub84->currentIndex(),ui->spe84->currentIndex(),ui->dep84->currentIndex())[1];
    lines[1703]=wepIndex(ui->sub84->currentIndex(),ui->spe84->currentIndex(),ui->dep84->currentIndex())[2];
    lines[1724]=wepIndex(ui->sub85->currentIndex(),ui->spe85->currentIndex(),ui->dep85->currentIndex())[0];
    lines[1722]=wepIndex(ui->sub85->currentIndex(),ui->spe85->currentIndex(),ui->dep85->currentIndex())[1];
    lines[1723]=wepIndex(ui->sub85->currentIndex(),ui->spe85->currentIndex(),ui->dep85->currentIndex())[2];
    lines[1744]=wepIndex(ui->sub86->currentIndex(),ui->spe86->currentIndex(),ui->dep86->currentIndex())[0];
    lines[1742]=wepIndex(ui->sub86->currentIndex(),ui->spe86->currentIndex(),ui->dep86->currentIndex())[1];
    lines[1743]=wepIndex(ui->sub86->currentIndex(),ui->spe86->currentIndex(),ui->dep86->currentIndex())[2];
    lines[1764]=wepIndex(ui->sub87->currentIndex(),ui->spe87->currentIndex(),ui->dep87->currentIndex())[0];
    lines[1762]=wepIndex(ui->sub87->currentIndex(),ui->spe87->currentIndex(),ui->dep87->currentIndex())[1];
    lines[1763]=wepIndex(ui->sub87->currentIndex(),ui->spe87->currentIndex(),ui->dep87->currentIndex())[2];
    lines[1784]=wepIndex(ui->sub88->currentIndex(),ui->spe88->currentIndex(),ui->dep88->currentIndex())[0];
    lines[1782]=wepIndex(ui->sub88->currentIndex(),ui->spe88->currentIndex(),ui->dep88->currentIndex())[1];
    lines[1783]=wepIndex(ui->sub88->currentIndex(),ui->spe88->currentIndex(),ui->dep88->currentIndex())[2];
    lines[1804]=wepIndex(ui->sub89->currentIndex(),ui->spe89->currentIndex(),ui->dep89->currentIndex())[0];
    lines[1802]=wepIndex(ui->sub89->currentIndex(),ui->spe89->currentIndex(),ui->dep89->currentIndex())[1];
    lines[1803]=wepIndex(ui->sub89->currentIndex(),ui->spe89->currentIndex(),ui->dep89->currentIndex())[2];
    lines[1824]=wepIndex(ui->sub90->currentIndex(),ui->spe90->currentIndex(),ui->dep90->currentIndex())[0];
    lines[1822]=wepIndex(ui->sub90->currentIndex(),ui->spe90->currentIndex(),ui->dep90->currentIndex())[1];
    lines[1823]=wepIndex(ui->sub90->currentIndex(),ui->spe90->currentIndex(),ui->dep90->currentIndex())[2];


    for (auto i = 0; i < lines.size(); i++) {

        ui->plainTextEdit->appendPlainText( (QString::fromStdString(lines[i])));

    }


}






