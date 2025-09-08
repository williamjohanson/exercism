Public Class Allergies
    Private _allergyValues As List(Of String)

    Public Sub New(score As Integer)
        _allergyValues = New List(Of String)()
        ' Limit The Score To Valid Bounds
        If score > 256 Then
            score -= 256
        End If

        Dim Position As AllergiesEnum
        Position = AllergiesEnum.eggs
        While score > 0
            If IsOdd(score) Then
                _allergyValues.Add(Position.ToString())
            End If
            Position += 1
            score >>= 1
        End While

    End Sub

    Public Function AllergicTo(allergy As String) As Boolean
        Return _allergyValues.Contains(allergy)
    End Function

    Public Function List() As IList(Of String)
        If _allergyValues.Count() > 0 Then
            Return _allergyValues
        End If
        Return New List(Of String)
    End Function

    Private Function IsOdd(num As Integer) As Boolean
        Return num Mod 2 = 1
    End Function

    Enum AllergiesEnum
        eggs
        peanuts
        shellfish
        strawberries
        tomatoes
        chocolate
        pollen
        cats
    End Enum

End Class