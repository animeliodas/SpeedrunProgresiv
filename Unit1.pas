Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
var 
  current_posishon, new_posishon, cht, i, g, sp1, rov :integer;
  time_travel,size_bar :integer;
  s1,fails,sating : string;
  posishon,delenie,vremi : real;
  f1,lod1: Text;
  

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure timer1_Tick(sender: Object; e: EventArgs);
    procedure timer2_Tick(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure player1_CheckedChanged(sender: Object; e: EventArgs);
    procedure player2_CheckedChanged(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure nachalo_Click(sender: Object; e: EventArgs);
    procedure konec_Click(sender: Object; e: EventArgs);
    procedure pravo_Click(sender: Object; e: EventArgs);
    procedure vlevo_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    del1: TextBox;
    del2: TextBox;
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    timer2: Timer;
    debu: TextBox;
    button2: Button;
    player1: RadioButton;
    player2: RadioButton;
    putkfail: MaskedTextBox;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    zizi: MaskedTextBox;
    label5: &Label;
    button3: Button;
    button4: Button;
    label6: &Label;
    iconsize: TextBox;
    nachalo: Button;
    konec: Button;
    pravo: Button;
    tutu: PictureBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs); // Старт цикла
begin
  fails := putkfail.Text;
  size_bar := StrToInt(zizi.Text);
  time_travel := StrToInt(debu.Text);
  g := 0;
  
  
  timer2.Enabled := true;
  button1.Enabled := false;
  button2.Enabled := true;
  
end;

procedure Form1.timer1_Tick(sender: Object; e: EventArgs); // Смена положения
begin
  tutu.Location := new Point(tutu.Location.X + Trunc(delenie),150);
  if i = cht then
  begin
    tutu.Location := new Point(tutu.Location.X + Trunc(delenie),150);
    tutu.Location := new Point(new_posishon,150);
    timer1.Enabled := false;
    end;
  begin

    i := i + 1;
    
  end;
   
end;

procedure Form1.timer2_Tick(sender: Object; e: EventArgs); // Цыкл подгрузки сплита
begin
  Assign(f1,fails); // Инецализация файла
  Reset(f1);
  Readln(f1,s1);
  CloseFile(f1); // Закрытие файла
  rov:= Pos('=',s1);
  Delete(s1,1,rov);
  if s1 = '' then
    sp1 := 0
  else
  sp1 := StrToInt(s1); // сплит для первого ранера
  
  
  if sp1 > g then 
  begin
  posishon := size_bar / StrToFloat(del1.Text);
  delenie := posishon / StrToFloat(del2.Text);
  vremi := time_travel / StrToFloat(del2.Text);
  cht := StrToInt(del2.Text);
  i := 0;
  current_posishon := tutu.Location.X;
  new_posishon := current_posishon + Trunc(posishon);
  
  timer1.Interval := Trunc(vremi);
  timer1.Enabled := true;
  g := g+1;
  end;
 
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs); // Стоп полного цикла
begin
  
  timer2.Enabled := false;
  tutu.Location := new Point(150,150);
  button2.Enabled := false;
  button1.Enabled := true;
  
end;

procedure Form1.player1_CheckedChanged(sender: Object; e: EventArgs); // Выбор первого игрока
begin
  
  tutu.Load('Player1.png');
  
  
end;

procedure Form1.player2_CheckedChanged(sender: Object; e: EventArgs); // Выбор второго игрока
begin
  tutu.Load('Player2.png');
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs); // Загрузить настройки
begin
  
  Assign(lod1,'settings.txt');
  Reset(lod1);
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  zizi.Text := sating; // размер
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  del1.Text := sating; // сплиты
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  del2.Text := sating; // шаги
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  debu.Text := sating; // время
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  if StrToInt(sating) = 2 then player2.Checked := true else player1.Checked := true; // игрок
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  putkfail.Text := sating; // путь
  
  
  CloseFile(lod1);
  
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs); // Сохранить настройки
begin
  Assign(lod1,'settings.txt');
  Rewrite(lod1);
  Writeln(lod1,'size=' + zizi.Text); // размер
  Writeln(lod1,'splits=' + del1.Text); // сплиты
  Writeln(lod1,'steps=' + del2.Text); // шаги
  Writeln(lod1,'time=' + debu.Text); // время
  Writeln(lod1,'player=' + if player1.Checked = true then '1' else '2'); // игрок
  Writeln(lod1,'lockation=' + putkfail.Text); // путь

  CloseFile(lod1);
  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  Assign(lod1,'settings.txt');
  Reset(lod1);
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  zizi.Text := sating; // размер
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  del1.Text := sating; // сплиты
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  del2.Text := sating; // шаги
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  debu.Text := sating; // время
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  if StrToInt(sating) = 2 then player2.Checked := true else player1.Checked := true; // игрок
  
  Readln(lod1,sating);
  rov:= Pos('=',sating);
  Delete(sating,1,rov);
  putkfail.Text := sating; // путь
end;

procedure Form1.nachalo_Click(sender: Object; e: EventArgs);
begin
  
  tutu.Location := new Point(150,150);
  
  
end;

procedure Form1.konec_Click(sender: Object; e: EventArgs);
begin
  
  tutu.Location := new Point(StrToInt(zizi.Text),150);
  
end;

procedure Form1.pravo_Click(sender: Object; e: EventArgs);
begin
  posishon := size_bar / StrToFloat(del1.Text);
  delenie := posishon / StrToFloat(del2.Text);
  vremi := time_travel / StrToFloat(del2.Text);
  cht := StrToInt(del2.Text);
  i := 0;
  current_posishon := tutu.Location.X;
  new_posishon := current_posishon + Trunc(posishon);
  
  timer1.Interval := Trunc(vremi);
  timer1.Enabled := true;
  g := g+1;
end;

procedure Form1.vlevo_Click(sender: Object; e: EventArgs);
begin
  posishon := size_bar / StrToFloat(del1.Text);
  delenie := posishon / StrToFloat(del2.Text);
  vremi := time_travel / StrToFloat(del2.Text);
  cht := StrToInt(del2.Text);
  i := 0;
  current_posishon := tutu.Location.X;
  new_posishon := current_posishon + Trunc(posishon);
  
  timer1.Interval := Trunc(vremi);
  timer1.Enabled := true;
  g := g+1;
end;

procedure Form1.button5_Click(sender: Object; e: EventArgs);
begin
  

  
end;

end.
