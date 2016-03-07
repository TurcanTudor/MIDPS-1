object Form1: TForm1
  Left = 294
  Top = 200
  Width = 597
  Height = 349
  Caption = 'MIDPS 1-A'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 152
    Top = 16
    Width = 312
    Height = 25
    Hint = 'Label1'
    Caption = 'Incrimentare decrementare contor'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlue
    Font.Height = -21
    Font.Name = 'Cambria'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 72
    Top = 64
    Width = 483
    Height = 24
    Hint = 'Label2'
    Caption = 'sensul de variatie a variabilei i din caseta Edit1'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Lucida Calligraphy'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Button1: TButton
    Left = 32
    Top = 120
    Width = 121
    Height = 49
    Hint = 'Button1'
    Caption = 'UP'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 32
    Top = 208
    Width = 121
    Height = 49
    Hint = 'Button2'
    Caption = 'DOWN'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 184
    Top = 176
    Width = 137
    Height = 21
    Hint = 'Edit1'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    Text = '0'
    OnChange = Edit1Change
  end
  object Button3: TButton
    Left = 360
    Top = 208
    Width = 169
    Height = 57
    Hint = 'Button3'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = Button3Click
  end
end
