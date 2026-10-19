Startup diagnostics
===================

Launch the game normally and reproduce the problem. Diagnostics start before
the launcher opens; no mod or setting needs to be enabled.

After the game closes or crashes, send the `diagnostics` folder beside
`MetroidNESRecomp.exe`. Each attempt creates a separate timestamped `.log`.
An unhandled Windows crash also creates a matching `.dmp` when possible.
Keep both files from the failing attempt.

If the game folder is read-only, look in
`%LOCALAPPDATA%\NESRecomp\diagnostics` instead. Logs identify the game build,
Windows version, CPU and display adapters, startup phase, renderer/audio setup,
enabled mods, and exception details. Files stay on your computer.

If Windows prevents the executable from starting at all, run
`Collect-Diagnostics.cmd` from the extracted folder, reproduce the problem,
and send the `diagnostics` folder it reports. This helper also records loader
failures that happen before the executable can write its own log.
