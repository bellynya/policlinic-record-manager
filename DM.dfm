object DataModule2: TDataModule2
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 616
  Width = 875
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=test_' +
      'server1;Initial Catalog=cursova'
    LoginPrompt = False
    Left = 344
    Top = 320
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 344
    Top = 368
  end
  object ADOT_Diagnosis: TADOTable
    Connection = ADOConnection1
    TableName = 'diagnosis'
    Left = 456
    Top = 320
  end
  object ADOT_JobTitle: TADOTable
    Connection = ADOConnection1
    TableName = 'job_title'
    Left = 456
    Top = 456
  end
  object ADOT_Patients: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'patients'
    Left = 544
    Top = 320
    object ADOT_Patientspatient_id: TAutoIncField
      FieldName = 'patient_id'
      ReadOnly = True
    end
    object ADOT_Patientssurname: TStringField
      FieldName = 'surname'
    end
    object ADOT_Patientsname_: TStringField
      FieldName = 'name_'
    end
    object ADOT_Patientssecond_name: TStringField
      FieldName = 'second_name'
    end
    object ADOT_Patientsto_staff: TIntegerField
      FieldName = 'to_staff'
    end
    object ADOT_Patientssex: TStringField
      FieldName = 'sex'
      Size = 2
    end
  end
  object ADOT_Staff: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'staff'
    Left = 544
    Top = 456
  end
  object ADOT_Users: TADOTable
    Connection = ADOConnection1
    TableName = 'users'
    Left = 624
    Top = 320
  end
  object ADOT_Visits: TADOTable
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'visits'
    Left = 624
    Top = 456
    object ADOT_Visitsid_patient: TIntegerField
      FieldName = 'id_patient'
    end
    object ADOT_Visitsstaff_name: TStringField
      FieldKind = fkLookup
      FieldName = 'staff_name'
      LookupDataSet = ADOT_Staff
      LookupKeyFields = 'staff_id'
      LookupResultField = 'surname'
      KeyFields = 'id_staff'
      Size = 50
      Lookup = True
    end
    object ADOT_Visitsid_staff: TIntegerField
      FieldName = 'id_staff'
    end
    object ADOT_Visitsdate_n_time: TStringField
      FieldName = 'date_n_time'
      Size = 40
    end
    object ADOT_Visitsreport: TStringField
      FieldName = 'report'
      Size = 100
    end
    object ADOT_Visitsdiagnosis: TIntegerField
      FieldName = 'diagnosis'
    end
  end
  object DS_Diagnosis: TDataSource
    DataSet = ADOT_Diagnosis
    Left = 456
    Top = 376
  end
  object DS_Patients: TDataSource
    DataSet = ADOT_Patients
    Left = 544
    Top = 376
  end
  object DS_Users: TDataSource
    DataSet = ADOT_Users
    Left = 624
    Top = 376
  end
  object DS_JobTitle: TDataSource
    DataSet = ADOT_JobTitle
    Left = 456
    Top = 512
  end
  object DS_Staff: TDataSource
    DataSet = ADOT_Staff
    Left = 544
    Top = 512
  end
  object DS_Visits: TDataSource
    DataSet = ADOT_Visits
    Left = 624
    Top = 512
  end
end
