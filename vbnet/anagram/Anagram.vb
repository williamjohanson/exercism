Public Class Anagram
    Private _baseWord As String
    Private _baseWordSorted As String

    Public Sub New(baseWord As String)
        _baseWord = baseWord.ToLower()
        _baseWordSorted = String.Concat(_baseWord.OrderBy(Function(w) w))
    End Sub

    Public Function Match(potentialMatches As String()) As String()
        Dim currentWord As String
        Dim currentWordLower As String
        Dim currentWordSorted As String
        Dim result As New List(Of String)

        For i As Integer = 0 To potentialMatches.Count() - 1
            currentWord = potentialMatches(i)
            currentWordLower = currentWord.ToLower()
            currentWordSorted = String.Concat(currentWordLower.OrderBy(Function(w) w))
            If (Not currentWordLower = _baseWord) And (currentWordSorted = _baseWordSorted) Then
                result.Add(currentWord)
            End If
        Next

        Return result.OrderBy(Function(w) w).ToArray()
    End Function
End Class