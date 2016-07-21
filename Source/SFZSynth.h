#ifndef SFZSynth_h
#define SFZSynth_h

#include "../JuceLibraryCode/JuceHeader.h"


class SFZSynth : public Synthesiser {
	public:
		SFZSynth();

		void	noteOn(int midiChannel, int midiNoteNumber, float velocity);
		void	noteOff(
			int midiChannel, int midiNoteNumber,
			float velocity, bool allowTailOff);

		int	numVoicesUsed();
		String   	voiceInfoString();

	protected:
		unsigned char	noteVelocities[128];
	};

#endif 	// !SFZSynth_h

