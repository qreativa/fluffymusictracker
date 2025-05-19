# Preliminary roadmap

This is a preliminary roadmap of features that should be implemented in each module, along with the statuses of their implementations. This is subject to change and should not be considered final.

## Legend
- ✅ = implemented
- 🟡 = work in progress
- ❌ = not implemented
- ❔ = might not be needed

# 🟡 platform

- 🟡 create/destroy window
- ❌ ui elements (buttons, labels, subwindows, tabs...) (maybe split into its own module?)
- ❌ audio output
- ❌ adjustable timer
- ❌ file operations (read, write, browse)
- ❌ clipboard operations
- ❌ audio resampling (here? idk where else to put it)
- ❌ keyboard note input
- ❌ midi note input
- ❔ general kb/mouse input

# ❌ ui

- ❌ keyboard shortcuts
- ❌ main window
- ❌ pattern view
- ❌ psg instrument editor
- ❌ fm instrument editor
- ❌ wavetable instrument editor
- ❌ sample editor
- ❌ oscilloscope view
- ❌ configuration

# ❌ engine

- ❌ patterns
- ❌ orders
- ❌ macros/effects
- ❌ psg instruments
- ❌ fm instruments
- ❌ wavetable instruments
- ❌ sample instruments
- ❌ playback

# ❌ audiodriver

- ❌ set chip register
- ❌ note pitch table/calculation
- ❌ vibrato
- ❌ portamento
- ❌ pitch bends
- ❌ volume slides
- ❌ compressor
- ❌ any chip-specific effects

# ❌ audiocore

- ❌ psg oscillator
- ❌ fm oscillator
- ❌ wavetable oscillator
- ❌ sample player
- ❌ individual channel output
- ❌ mixed output
