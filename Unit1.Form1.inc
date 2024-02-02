procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.button1 := new System.Windows.Forms.Button();
        self.tutu := new System.Windows.Forms.PictureBox();
        self.del1 := new System.Windows.Forms.TextBox();
        self.del2 := new System.Windows.Forms.TextBox();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.timer2 := new System.Windows.Forms.Timer(self.components);
        self.debu := new System.Windows.Forms.TextBox();
        self.button2 := new System.Windows.Forms.Button();
        self.player1 := new System.Windows.Forms.RadioButton();
        self.player2 := new System.Windows.Forms.RadioButton();
        self.putkfail := new System.Windows.Forms.MaskedTextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.zizi := new System.Windows.Forms.MaskedTextBox();
        self.label5 := new System.Windows.Forms.Label();
        self.button3 := new System.Windows.Forms.Button();
        self.button4 := new System.Windows.Forms.Button();
        self.label6 := new System.Windows.Forms.Label();
        self.iconsize := new System.Windows.Forms.TextBox();
        self.nachalo := new System.Windows.Forms.Button();
        self.konec := new System.Windows.Forms.Button();
        self.pravo := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.tutu)).BeginInit();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(63, 496);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Старт';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // tutu
        // 
        self.tutu.Anchor := (System.Windows.Forms.AnchorStyles((System.Windows.Forms.AnchorStyles.Bottom or System.Windows.Forms.AnchorStyles.Right)));
        self.tutu.Image := (System.Drawing.Image(resources.GetObject('tutu.Image')));
        self.tutu.Location := new System.Drawing.Point(150, 150);
        self.tutu.Name := 'tutu';
        self.tutu.Size := new System.Drawing.Size(96, 96);
        self.tutu.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.tutu.TabIndex := 1;
        self.tutu.TabStop := false;
        // 
        // del1
        // 
        self.del1.Location := new System.Drawing.Point(63, 567);
        self.del1.Name := 'del1';
        self.del1.Size := new System.Drawing.Size(100, 20);
        self.del1.TabIndex := 2;
        self.del1.Text := '15';
        // 
        // del2
        // 
        self.del2.Location := new System.Drawing.Point(63, 593);
        self.del2.Name := 'del2';
        self.del2.Size := new System.Drawing.Size(100, 20);
        self.del2.TabIndex := 3;
        self.del2.Text := '20';
        // 
        // timer1
        // 
        self.timer1.Tick += timer1_Tick;
        // 
        // timer2
        // 
        self.timer2.Tick += timer2_Tick;
        // 
        // debu
        // 
        self.debu.Location := new System.Drawing.Point(63, 619);
        self.debu.Name := 'debu';
        self.debu.Size := new System.Drawing.Size(100, 20);
        self.debu.TabIndex := 4;
        self.debu.Text := '300';
        // 
        // button2
        // 
        self.button2.Enabled := false;
        self.button2.Location := new System.Drawing.Point(171, 496);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 5;
        self.button2.Text := 'Стоп';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // player1
        // 
        self.player1.Checked := true;
        self.player1.Location := new System.Drawing.Point(63, 681);
        self.player1.Name := 'player1';
        self.player1.Size := new System.Drawing.Size(104, 24);
        self.player1.TabIndex := 6;
        self.player1.TabStop := true;
        self.player1.Text := 'Первый игрок';
        self.player1.UseVisualStyleBackColor := true;
        self.player1.CheckedChanged += player1_CheckedChanged;
        // 
        // player2
        // 
        self.player2.Location := new System.Drawing.Point(63, 711);
        self.player2.Name := 'player2';
        self.player2.Size := new System.Drawing.Size(104, 24);
        self.player2.TabIndex := 7;
        self.player2.Text := 'Второй игрок';
        self.player2.UseVisualStyleBackColor := true;
        self.player2.CheckedChanged += player2_CheckedChanged;
        // 
        // putkfail
        // 
        self.putkfail.Location := new System.Drawing.Point(359, 496);
        self.putkfail.Name := 'putkfail';
        self.putkfail.Size := new System.Drawing.Size(869, 20);
        self.putkfail.TabIndex := 8;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(253, 501);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(100, 23);
        self.label1.TabIndex := 9;
        self.label1.Text := 'Путь до папки';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(171, 570);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(349, 23);
        self.label2.TabIndex := 10;
        self.label2.Text := 'Количество сплитов';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(171, 596);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(415, 23);
        self.label3.TabIndex := 11;
        self.label3.Text := 'Количество шагов между сплитов';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(171, 622);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(484, 23);
        self.label4.TabIndex := 12;
        self.label4.Text := 'Время перехода в милесекундах';
        // 
        // zizi
        // 
        self.zizi.Location := new System.Drawing.Point(63, 541);
        self.zizi.Name := 'zizi';
        self.zizi.Size := new System.Drawing.Size(100, 20);
        self.zizi.TabIndex := 13;
        self.zizi.Text := '1200';
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(171, 544);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(100, 23);
        self.label5.TabIndex := 14;
        self.label5.Text := 'Длина полоски';
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(467, 537);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(151, 23);
        self.button3.TabIndex := 15;
        self.button3.Text := 'Загрузить настройки';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(642, 537);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(151, 23);
        self.button4.TabIndex := 16;
        self.button4.Text := 'Сохранить настройки';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // label6
        // 
        self.label6.Location := new System.Drawing.Point(171, 648);
        self.label6.Name := 'label6';
        self.label6.Size := new System.Drawing.Size(484, 23);
        self.label6.TabIndex := 18;
        self.label6.Text := 'Размер иконки';
        self.label6.Visible := false;
        // 
        // iconsize
        // 
        self.iconsize.Location := new System.Drawing.Point(63, 645);
        self.iconsize.Name := 'iconsize';
        self.iconsize.Size := new System.Drawing.Size(100, 20);
        self.iconsize.TabIndex := 17;
        self.iconsize.Text := '96';
        self.iconsize.Visible := false;
        // 
        // nachalo
        // 
        self.nachalo.Location := new System.Drawing.Point(995, 537);
        self.nachalo.Name := 'nachalo';
        self.nachalo.Size := new System.Drawing.Size(75, 23);
        self.nachalo.TabIndex := 19;
        self.nachalo.Text := 'Начало';
        self.nachalo.UseVisualStyleBackColor := true;
        self.nachalo.Click += nachalo_Click;
        // 
        // konec
        // 
        self.konec.Location := new System.Drawing.Point(1157, 537);
        self.konec.Name := 'konec';
        self.konec.Size := new System.Drawing.Size(75, 23);
        self.konec.TabIndex := 20;
        self.konec.Text := 'Конец';
        self.konec.UseVisualStyleBackColor := true;
        self.konec.Click += konec_Click;
        // 
        // pravo
        // 
        self.pravo.Location := new System.Drawing.Point(1076, 537);
        self.pravo.Name := 'pravo';
        self.pravo.Size := new System.Drawing.Size(75, 23);
        self.pravo.TabIndex := 21;
        self.pravo.Text := 'Вправо';
        self.pravo.UseVisualStyleBackColor := true;
        self.pravo.Click += pravo_Click;
        // 
        // Form1
        // 
        self.BackColor := System.Drawing.Color.LightGray;
        self.ClientSize := new System.Drawing.Size(1584, 861);
        self.Controls.Add(self.pravo);
        self.Controls.Add(self.konec);
        self.Controls.Add(self.nachalo);
        self.Controls.Add(self.label6);
        self.Controls.Add(self.iconsize);
        self.Controls.Add(self.button4);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.zizi);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.putkfail);
        self.Controls.Add(self.player2);
        self.Controls.Add(self.player1);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.debu);
        self.Controls.Add(self.del2);
        self.Controls.Add(self.del1);
        self.Controls.Add(self.tutu);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Прогрес бар для спидранов';
        self.Load += Form1_Load;
        (System.ComponentModel.ISupportInitialize(self.tutu)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
