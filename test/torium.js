import {expect} from 'chai';
import torium from '../torium';


describe('Torium', function() {
	describe('Random', function() {
		describe('random', function() {
			it('Generated random buffer of correct size', function() {
				return torium.random(12).then(function(buffer) {
					expect(buffer instanceof Buffer).to.equal(true);
					expect(buffer.length).to.equal(12);
				});
			});
		});
	});
});
