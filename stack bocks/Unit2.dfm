object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 277
  ClientWidth = 407
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 152
    Top = 56
    Width = 60
    Height = 19
    Caption = 'Combo1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 72
    Top = 107
    Width = 95
    Height = 13
    Caption = 'Tama'#241'o del Combo:'
  end
  object Label3: TLabel
    Left = 96
    Top = 133
    Width = 35
    Height = 13
    Caption = 'Donut1'
  end
  object Label4: TLabel
    Left = 96
    Top = 161
    Width = 35
    Height = 13
    Caption = 'Donut2'
  end
  object Label5: TLabel
    Left = 96
    Top = 192
    Width = 47
    Height = 13
    Caption = 'Cantidad:'
  end
  object ComboBox1: TComboBox
    Left = 184
    Top = 104
    Width = 145
    Height = 21
    DropDownCount = 3
    MaxLength = 3
    TabOrder = 0
    Text = 'Tama'#241'o'
  end
  object ComboBox2: TComboBox
    Left = 184
    Top = 131
    Width = 145
    Height = 21
    TabOrder = 1
    Text = 'Sabor'
  end
  object ComboBox3: TComboBox
    Left = 184
    Top = 158
    Width = 145
    Height = 21
    TabOrder = 2
    Text = 'Sabor'
  end
  object Edit1: TEdit
    Left = 184
    Top = 189
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 152
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Aceptar'
    TabOrder = 4
    OnClick = Button1Click
  end
end
