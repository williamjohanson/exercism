Imports System

Public Module ArmstrongNumbers
    Public Function IsArmstrongNumber(ByVal number As Integer) As Boolean
        Dim modulus As Integer
        Dim components As New List(Of Integer)
        Dim remainder As Integer = number

        While remainder > 9
            modulus = remainder Mod 10
            remainder = remainder \ 10
            components.Add(modulus)
        End While


        If remainder < 10 Then
            components.Add(remainder)
        End If

        Dim count As Integer = components.Count()
        Dim result As Integer = 0

        For i As Integer = 0 To count - 1
            result += components(i) ^ count
        Next

        Return result = number

    End Function
End Module
