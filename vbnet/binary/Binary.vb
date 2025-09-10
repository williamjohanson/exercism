Public Class Binary
    Private _digits As Char()

    Public Sub New(value As String)
        _digits = value.ToCharArray()
    End Sub

    Public Function ToDecimal() As Integer
        Dim result As Integer = 0
        Dim j = 0

        For Each digit In _digits.Reverse()
            If digit = "1" Then
                result += 2 ^ j
            ElseIf Not digit = "0" Then
                ' We have a perpitrator
                result = 0
                Exit For
            End If
            j += 1
        Next

        Return result
    End Function
End Class