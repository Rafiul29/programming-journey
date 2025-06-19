total_length=1000
total_block=100
complete_block=35
function calculatePercentageWork(total_length,total_block,complete_block){
      const block_length=total_length/total_block
      const complete_block_length=block_length*complete_block
      const complete_work=complete_block_length*100/total_length
      const incomplete_work=100-complete_work
      return `Complete Wrok -- ${complete_work}% \nIncomplete Work -- ${incomplete_work}%`
}

console.log(calculatePercentageWork(total_length,total_block,complete_block))
