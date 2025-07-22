


with open("default.txt","r") as data:
    #get linecount then determine no. of weapons and create 2d list
    content=data.readlines()
    lineCount= len(content)
    i=int((lineCount-5)/20)
    rows, column = (i,7)
    wepList = [[0 for i in range(column)] for j in range(rows)]
    j=12
    k=0
    
    
    while j < lineCount:
        wepList[k][0]= content[j].replace("    Main: ","").replace("\n","")
        wepList[k][1]= content[j+12].replace("    Sub: ","").replace("\n","")
        wepList[k][2]= content[j+10].replace("    Special: ","").replace("\n","")
        wepList[k][3]= content[j+11].replace("    SpecialDownRate: !l ","").replace("\n","")
        if wepList[k][1]=='Bomb_Throw':
            wepList[k][4]=0
        elif wepList[k][1]=='Bomb_Hold':
            wepList[k][4]=1
        elif wepList[k][1]=='Bomb_Handy':
            wepList[k][4]=2
        elif wepList[k][1]=='Bomb_Chase':
            wepList[k][4]=3
        elif wepList[k][1]=='TimerTrap':
            wepList[k][4]=4
        elif wepList[k][1]=='DevilBall':
            wepList[k][4]=5
        elif wepList[k][1]=='MarkingBall':
            wepList[k][4]=6
        elif wepList[k][1]=='Shield':
            wepList[k][4]=7
        elif wepList[k][1]=='Sprinkler':
            wepList[k][4]=8
        elif wepList[k][1]=='Flag':
            wepList[k][4]=9
        else:
            print('error')

        if wepList[k][2]=='FreeBombs':
            wepList[k][5]=0
        elif wepList[k][2]=='AllMarking':
            wepList[k][5]=1
        elif wepList[k][2]=='Barrier':
            wepList[k][5]=2
        elif wepList[k][2]=='Tornado':
            wepList[k][5]=3
        elif wepList[k][2]=='SuperShot':
            wepList[k][5]=4
        elif wepList[k][2]=='BigLaser':
            wepList[k][5]=5
        elif wepList[k][2]=='KingSquid':
            wepList[k][5]=6
        else:
            print('error')

        if wepList[k][3]=='60':
            wepList[k][6]=0
        elif wepList[k][3]=='40':
            wepList[k][6]=1
        elif wepList[k][3]=='25':
            wepList[k][6]=2
        else:
            print('error')
 

        print(str(k)+wepList[k][0])
        print(wepList[k][1])
        k=k+1
        j=j+20

with open("pic change.txt","w") as pic:
    
    for l in range(91):
        pic.write('void MainWindow::on_sub'+str(l)+'_currentIndexChanged()\n{\n    if (ui->spe'+str(l)+'->currentIndex()==0){\n        QPixmap picSpe(":/new/images/timg/"+ui->sub'+str(l)+'->currentText()+" Rush.png");\n')
        pic.write('        ui->spe'+str(l)+'pic->setPixmap(picSpe);\n    }\n    QPixmap picSub(":/new/images/timg/"+ui->sub'+str(l)+'->currentText()+".png");\n    ui->sub'+str(l)+'pic->setPixmap(picSub);\n}\n')
        pic.write('void MainWindow::on_spe'+str(l)+'_currentIndexChanged()\n{\n    if (ui->spe'+str(l)+'->currentIndex()==0){\n        QPixmap picSpe(":/new/images/timg/"+ui->sub'+str(l)+'->currentText()+" Rush.png");\n')
        pic.write('        ui->spe'+str(l)+'pic->setPixmap(picSpe);\n    }else{\n        QPixmap picSpe(":/new/images/timg/"+ui->spe'+str(l)+'->currentText()+".png");\n        ui->spe'+str(l)+'pic->setPixmap(picSpe);\n    }\n}\n\n')

with open("test.txt","w") as test:
    for p in range(91):
        test.write('    ui->sub'+str(p)+'->setCurrentIndex('+str(wepList[p][4])+');\n    ui->spe'+str(p)+'->setCurrentIndex('+str(wepList[p][5])+');\n    ui->dep'+str(p)+'->setCurrentIndex('+str(wepList[p][6])+');\n')
    test.write('\n')
    for n in range(91):
        test.write('    if (ui->spe'+str(n)+'->currentIndex()==0){\n        QPixmap picSpe'+str(n)+'(":/new/images/timg/"+ui->sub'+str(n)+'->currentText()+" Rush.png");\n')
        test.write('        ui->spe'+str(n)+'pic->setPixmap(picSpe'+str(n)+');\n    }\n    QPixmap picSub'+str(n)+'(":/new/images/timg/"+ui->sub'+str(n)+'->currentText()+".png");\n    ui->sub'+str(n)+'pic->setPixmap(picSub'+str(n)+');\n')

with open("inipic.txt","w") as inipic:
    for n in range(31):
        inipic.write('    if (ui->spe'+str(n)+'->currentIndex()==0){\n        QPixmap picSpe'+str(n)+'(":/new/images/timg/"+ui->sub'+str(n)+'->currentText()+" Rush.png");\n')
        inipic.write('        ui->spe'+str(n)+'pic->setPixmap(picSpe'+str(n)+');\n    }\n    QPixmap picSub'+str(n)+'(":/new/images/timg/"+ui->sub'+str(n)+'->currentText()+".png");\n    ui->sub'+str(n)+'pic->setPixmap(picSub'+str(n)+');\n')

with open("slots.txt","w") as slots:
    for m in range(91):
        slots.write('    void on_sub'+str(m)+'_currentIndexChanged();\n    void on_spe'+str(m)+'_currentIndexChanged();\n')


with open("end.txt","w") as end:
    for n in range(91):
        end.write('    lines['+str(n*20+24)+']=wepIndex(ui->sub'+str(n)+'->currentIndex(),ui->spe'+str(n)+'->currentIndex(),ui->dep'+str(n)+'->currentIndex())[0];\n')
        end.write('    lines['+str(n*20+22)+']=wepIndex(ui->sub'+str(n)+'->currentIndex(),ui->spe'+str(n)+'->currentIndex(),ui->dep'+str(n)+'->currentIndex())[1];\n')
        end.write('    lines['+str(n*20+23)+']=wepIndex(ui->sub'+str(n)+'->currentIndex(),ui->spe'+str(n)+'->currentIndex(),ui->dep'+str(n)+'->currentIndex())[2];\n')

with open("rsub.txt","w") as rsub:
    for o in range(91):
        rsub.write('ui->sub'+str(o)+'->setCurrentIndex(distribsub(gen));\n')

with open("rspe.txt","w") as rspe:
    for o in range(91):
        rspe.write('ui->spe'+str(o)+'->setCurrentIndex(distribspe(gen1));\n')


with open("rdep.txt","w") as rdpe:
    for o in range(91):
        rdpe.write('ui->dep'+str(o)+'->setCurrentIndex(distribdep(gen2));\n')
