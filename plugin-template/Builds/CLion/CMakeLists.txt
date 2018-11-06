# Automatically generated CMakeLists, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required (VERSION 3.4.1)

if (NOT CMAKE_BUILD_TYPE)
    set (CMAKE_BUILD_TYPE "Debug"  CACHE STRING "Choose the type of build." FORCE)
endif (NOT CMAKE_BUILD_TYPE)

###############################################################################
# Linux Makefile
###############################################################################

if (UNIX AND NOT APPLE)

project ("plugin-template" C CXX)

find_package (PkgConfig REQUIRED)
pkg_search_module (ALSA REQUIRED alsa)
pkg_search_module (FREETYPE2 REQUIRED freetype2)
pkg_search_module (LIBCURL REQUIRED libcurl)
pkg_search_module (X11 REQUIRED x11)
pkg_search_module (XEXT REQUIRED xext)
pkg_search_module (XINERAMA REQUIRED xinerama)
pkg_search_module (WEBKIT2GTK-4.0 REQUIRED webkit2gtk-4.0)
pkg_search_module (GTK+-X11-3.0 REQUIRED gtk+-x11-3.0)

add_library (VST MODULE
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST2.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_VST2.cpp"
)

set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)

add_executable (STANDALONE_PLUGIN
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_Standalone.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_Standalone.cpp"
)

set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_Standalone.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)

add_library (SHARED_CODE STATIC
    "../../Source/PluginProcessor.cpp"
    "../../Source/PluginProcessor.h"
    "../../Source/PluginEditor.cpp"
    "../../Source/PluginEditor.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/all.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/assert.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/callback.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/compat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/export.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/format.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBaseHelper.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewDispatch.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputFormatConverter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUSilentTimeout.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUTimestampGenerator.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUViewLocalizedStringKeys.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomic.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomicStack.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAutoDisposer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugMacros.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugPrintf.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAException.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAHostTimeBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMath.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAReferenceCounted.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAThreadSafeList.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnitTypes.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAXException.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterApp.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_CarbonVisibility.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_CheckSettingMacros.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_FakeMouseMoveGenerator.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeModuleHeaders.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeSystemHeaders.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginHostType.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_WindowsHooks.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VSTCallbackHandler.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_utils.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST_utils.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.mm"
    "../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../../opt/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../../opt/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../../opt/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../../opt/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Desktop.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.mm"
    "../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_video/capture/juce_CameraDevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_android_CameraDevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_mac_Video.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/native/juce_win32_Video.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_video/playback/juce_VideoComponent.h"
    "../../../../../../../../opt/JUCE/modules/juce_video/juce_video.cpp"
    "../../../../../../../../opt/JUCE/modules/juce_video/juce_video.mm"
    "../../../../../../../../opt/JUCE/modules/juce_video/juce_video.h"
    "../../JuceLibraryCode/AppConfig.h"
    "../../JuceLibraryCode/include_juce_audio_basics.cpp"
    "../../JuceLibraryCode/include_juce_audio_devices.cpp"
    "../../JuceLibraryCode/include_juce_audio_formats.cpp"
    "../../JuceLibraryCode/include_juce_audio_plugin_client_utils.cpp"
    "../../JuceLibraryCode/include_juce_audio_processors.cpp"
    "../../JuceLibraryCode/include_juce_audio_utils.cpp"
    "../../JuceLibraryCode/include_juce_core.cpp"
    "../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../JuceLibraryCode/include_juce_events.cpp"
    "../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../JuceLibraryCode/include_juce_opengl.cpp"
    "../../JuceLibraryCode/include_juce_video.cpp"
    "../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties ("../../Source/PluginProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../Source/PluginEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/audio_play_head/juce_AudioPlayHead.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioChannelSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioDataConverters.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_AudioSampleBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/buffers/juce_FloatVectorOperations.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_CatmullRomInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_Decibels.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_IIRFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LagrangeInterpolator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_LinearSmoothedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/effects/juce_Reverb.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiKeyboardState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiMessageSequence.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/midi/juce_MidiRPN.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEInstrument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEMessages.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPENote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPESynthesiserVoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEUtils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/mpe/juce_MPEZoneLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/native/juce_mac_CoreAudioLayouts.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_AudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_BufferingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ChannelRemappingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_IIRFilterAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MemoryAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_MixerAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_PositionableAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ResamplingAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ReverbAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/sources/juce_ToneGeneratorAudioSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/synthesisers/juce_Synthesiser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_basics/juce_audio_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioDeviceManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_AudioIODeviceType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/audio_io/juce_SystemAudioVolume.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiInput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiMessageCollector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/midi_io/juce_MidiOutput.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_Oboe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_android_OpenSL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_ios_Audio.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_ALSA.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_Bela.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_JackAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_linux_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_mac_CoreAudio.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_mac_CoreMidi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_MidiDataConcatenator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_ASIO.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_DirectSound.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_Midi.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/native/juce_win32_WASAPI.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioSourcePlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/sources/juce_AudioTransportSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_devices/juce_audio_devices.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitmath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitreader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/bitwriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/cpu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/crc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/fixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/float.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/md5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/stream_encoder_framing.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/private/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/include/protected/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitmath.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitreader.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/bitwriter.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/cpu.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/crc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/fixed.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/float.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/format.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/lpc_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/md5.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/memory.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_decoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/stream_encoder_framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/libFLAC/window_flac.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/alloc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/assert.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/callback.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/compat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/endswap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/export.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/Flac Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/format.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/metadata.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/ordinals.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/stream_decoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/stream_encoder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/flac/win_utf8_io.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/coupled/res_books_stereo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/floor/floor_books.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/books/uncoupled/res_books_uncoupled.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/floor_all.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/psych_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/residue_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_22.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44p51.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_44u.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/modes/setup_X.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/analysis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/backends.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/bitrate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/block.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codebook.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/codec_internal.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/envelope.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/floor1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/highlevel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/info.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lookup_data.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lpc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/lsp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mapping0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/masking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/mdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/misc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/os.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/psy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/registry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/res0.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/scales.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/sharedbook.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/smallft.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/synthesis.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisenc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/vorbisfile.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/libvorbis-1.3.2/lib/window.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/bitwise.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/codec.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/config_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/framing.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/Ogg Vorbis Licence.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/ogg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/os_types.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisenc.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/oggvorbis/vorbisfile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_AiffAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_CoreAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_FlacAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_LAMEEncoderAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_MP3AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_OggVorbisAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WavAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/codecs/juce_WindowsMediaAudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatReaderSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioFormatWriter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_AudioSubsectionReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_BufferingAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/format/juce_MemoryMappedAudioFormatReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/sampler/juce_Sampler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_formats/juce_audio_formats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBaseHelper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewControl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUCarbonViewDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUDispatch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUInputFormatConverter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUMIDIBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUOutputElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUPlugInDispatch.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUScopeElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUSilentTimeout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUTimestampGenerator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/AUViewLocalizedStringKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAtomicStack.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAudioChannelLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAUParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAAutoDisposer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugMacros.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CADebugPrintf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAException.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAHostTimeBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAMutex.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CarbonEventHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAReferenceCounted.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAStreamBasicDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAThreadSafeList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnit.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAVectorUnitTypes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/CAXException.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/ComponentBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/AU/CoreAudioUtilityClasses/MusicDeviceBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterApp.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/Standalone/juce_StandaloneFilterWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_CarbonVisibility.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_CheckSettingMacros.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_FakeMouseMoveGenerator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeModuleHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_IncludeSystemHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginHostType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/utility/juce_WindowsHooks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/VST/juce_VSTCallbackHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client_VST_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_plugin_client/juce_audio_plugin_client.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format/juce_AudioPluginFormatManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_AudioUnitPluginFormat.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LADSPAPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_LegacyAudioParameter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3Common.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3Headers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VST3PluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTCommon.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTMidiEventList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/format_types/juce_VSTPluginFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioPluginInstance.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorGraph.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_AudioProcessorParameter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_GenericAudioProcessorEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/processors/juce_PluginDescription.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_KnownPluginList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginDirectoryScanner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/scanning/juce_PluginListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterBool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterChoice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterFloat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioParameterInt.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameters.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorParameterWithID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/utilities/juce_AudioProcessorValueTreeState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_processors/juce_audio_processors.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDBurner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/audio_cd/juce_AudioCDReader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioDeviceSelectorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnail.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioThumbnailCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_AudioVisualiserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_BluetoothMidiDevicePairingDialogue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/gui/juce_MidiKeyboardComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_android_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_ios_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_linux_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_linux_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDBurner.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_AudioCDReader.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_mac_BluetoothMidiDevicePairingDialogue.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win_BluetoothMidiDevicePairingDialogue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDBurner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/native/juce_win32_AudioCDReader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_AudioProcessorPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/players/juce_SoundPlayer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_audio_utils/juce_audio_utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Draggable3DOrientation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Matrix3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Quaternion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/geometry/juce_Vector3D.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_MissingGLDefinitions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_android.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_ios.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_osx.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGL_win32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/native/juce_OpenGLExtensions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLFrameBuffer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLPixelFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLShaderProgram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/opengl/juce_OpenGLTexture.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/utils/juce_OpenGLAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_opengl/juce_opengl.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/capture/juce_CameraDevice.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/capture/juce_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_android_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_ios_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_mac_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_mac_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_win32_CameraDevice.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/native/juce_win32_Video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/playback/juce_VideoComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/playback/juce_VideoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/juce_video.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/juce_video.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../../../../../../../opt/JUCE/modules/juce_video/juce_video.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties ("../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

set_target_properties (VST PROPERTIES PREFIX "")
set_target_properties (VST PROPERTIES SUFFIX ".so")

set_target_properties (STANDALONE_PLUGIN PROPERTIES SUFFIX "")

set_target_properties (SHARED_CODE PROPERTIES SUFFIX ".a")

#------------------------------------------------------------------------------
# Config: Debug
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Debug)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

include_directories (
    "../../JuceLibraryCode"
    "/opt/JUCE/modules"
    ${ALSA_INCLUDE_DIRS}
    ${FREETYPE2_INCLUDE_DIRS}
    ${LIBCURL_INCLUDE_DIRS}
    ${X11_INCLUDE_DIRS}
    ${XEXT_INCLUDE_DIRS}
    ${XINERAMA_INCLUDE_DIRS}
    ${WEBKIT2GTK-4.0_INCLUDE_DIRS}
    ${GTK+-X11-3.0_INCLUDE_DIRS}
)

find_library (GL GL
)

find_library (DL dl
)

find_library (PTHREAD pthread
)

find_library (RT rt
)

set_target_properties (VST PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (VST PRIVATE
    LINUX=1
    DEBUG=1
    _DEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=1
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
)

target_compile_options (VST PRIVATE
    -fPIC
    -fvisibility=hidden
)

target_link_libraries (VST PRIVATE
    SHARED_CODE
    -march=native
    -shared
    -Wl,--no-undefined
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

add_dependencies (VST SHARED_CODE)

set_target_properties (STANDALONE_PLUGIN PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (STANDALONE_PLUGIN PRIVATE
    LINUX=1
    DEBUG=1
    _DEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=1
)

target_link_libraries (STANDALONE_PLUGIN PRIVATE
    SHARED_CODE
    -march=native
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

add_dependencies (STANDALONE_PLUGIN SHARED_CODE)

set_target_properties (SHARED_CODE PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (SHARED_CODE PRIVATE
    LINUX=1
    DEBUG=1
    _DEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=1
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=1
    JUCE_SHARED_CODE=1
)

target_link_libraries (SHARED_CODE PRIVATE
    -march=native
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -pthread -fPIC -g -ggdb -O0")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_C_FLAGS} ")

endif (CMAKE_BUILD_TYPE STREQUAL Debug)

#------------------------------------------------------------------------------
# Config: Release
#------------------------------------------------------------------------------

if (CMAKE_BUILD_TYPE STREQUAL Release)

execute_process (COMMAND uname -m OUTPUT_VARIABLE JUCE_ARCH_LABEL OUTPUT_STRIP_TRAILING_WHITESPACE)

include_directories (
    "../../JuceLibraryCode"
    "/opt/JUCE/modules"
    ${ALSA_INCLUDE_DIRS}
    ${FREETYPE2_INCLUDE_DIRS}
    ${LIBCURL_INCLUDE_DIRS}
    ${X11_INCLUDE_DIRS}
    ${XEXT_INCLUDE_DIRS}
    ${XINERAMA_INCLUDE_DIRS}
    ${WEBKIT2GTK-4.0_INCLUDE_DIRS}
    ${GTK+-X11-3.0_INCLUDE_DIRS}
)

find_library (GL GL
)

find_library (DL dl
)

find_library (PTHREAD pthread
)

find_library (RT rt
)

set_target_properties (VST PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (VST PRIVATE
    LINUX=1
    NDEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=1
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=0
)

target_compile_options (VST PRIVATE
    -fPIC
    -fvisibility=hidden
)

target_link_libraries (VST PRIVATE
    SHARED_CODE
    -march=native
    -shared
    -Wl,--no-undefined
    -fvisibility=hidden
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

add_dependencies (VST SHARED_CODE)

set_target_properties (STANDALONE_PLUGIN PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (STANDALONE_PLUGIN PRIVATE
    LINUX=1
    NDEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=0
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=1
)

target_link_libraries (STANDALONE_PLUGIN PRIVATE
    SHARED_CODE
    -march=native
    -fvisibility=hidden
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

add_dependencies (STANDALONE_PLUGIN SHARED_CODE)

set_target_properties (SHARED_CODE PROPERTIES
    OUTPUT_NAME "plugin-template"
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
)

target_compile_definitions (SHARED_CODE PRIVATE
    LINUX=1
    NDEBUG=1
    JUCER_LINUX_MAKE_6D53C8B4=1
    JUCE_APP_VERSION=1.0.0
    JUCE_APP_VERSION_HEX=0x10000
    JucePlugin_Build_VST=1
    JucePlugin_Build_VST3=0
    JucePlugin_Build_AU=0
    JucePlugin_Build_AUv3=0
    JucePlugin_Build_RTAS=0
    JucePlugin_Build_AAX=0
    JucePlugin_Build_Standalone=1
    JUCE_SHARED_CODE=1
)

target_link_libraries (SHARED_CODE PRIVATE
    -march=native
    -fvisibility=hidden
    ${GL}
    ${DL}
    ${PTHREAD}
    ${RT}
    ${ALSA_LIBRARIES}
    ${FREETYPE2_LIBRARIES}
    ${LIBCURL_LIBRARIES}
    ${X11_LIBRARIES}
    ${XEXT_LIBRARIES}
    ${XINERAMA_LIBRARIES}
    ${WEBKIT2GTK-4.0_LIBRARIES}
    ${GTK+-X11-3.0_LIBRARIES}
)

set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -march=native -pthread -fPIC -O3")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_C_FLAGS} ")

endif (CMAKE_BUILD_TYPE STREQUAL Release)

endif()

