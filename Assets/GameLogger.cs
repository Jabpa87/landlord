using System;
using System.IO;
using UnityEngine;

/// <summary>
/// Simple file-based gameplay logger (separate from feed UI).
/// </summary>
public static class GameLogger
{
    private static readonly string LogPath = @"c:\Users\DELL\bizgame\Assets\.cursor\gameplay.log";
    private static readonly object Locker = new object();

    public static void Log(string message)
    {
        try
        {
            string line = $"{DateTime.UtcNow:O} | {message}\n";
            lock (Locker)
            {
                File.AppendAllText(LogPath, line);
            }
        }
        catch
        {
            // Avoid throwing from logger.
        }
    }
}
